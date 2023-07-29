#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

void checkElf(unsigned char *e_ident);
void printMagicNumbers(unsigned char *e_ident);
void printClass(unsigned char *e_ident);
void printDataEncoding(unsigned char *e_ident);
void printVersion(unsigned char *e_ident);
void printOsAbi(unsigned char *e_ident);
void printAbiVersion(unsigned char *e_ident);
void printType(unsigned int e_type, unsigned char *e_ident);
void printEntryPoint(Elf64_Addr e_entry);

void checkElf(unsigned char *e_ident)
{
	if (e_ident[0] != 0x7f || e_ident[1] != 'E' || e_ident[2] != 'L' || e_ident[3] != 'F')
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		exit(1);
	}
}

void printMagicNumbers(unsigned char *e_ident)
{
	int i;
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	printf("%02x%s", e_ident[i], (i < EI_NIDENT - 1) ? " " : "\n");
}

void printClass(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;

		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

void printDataEncoding(unsigned char *e_ident)
{
	printf("  Data Encoding:                     ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

void printVersion(unsigned char *e_ident)
{
	printf("  Version:                           %d%s", e_ident[EI_VERSION],(e_ident[EI_VERSION] == EV_CURRENT) ? " (current)\n" : "\n");
}

void printOsAbi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
		case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
		case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
		case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
		case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
		case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
		case ELFOSABI_FREEBSD:

		printf("UNIX - FreeBSD\n");
		break;
		case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
		case ELFOSABI_ARM:
		printf("ARM\n");
		break;
		case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
		default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

void printAbiVersion(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

void printType(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
		printf("NONE (None)\n");
		break;

		case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
		case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
		case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
		case ET_CORE:
		printf("CORE (Core file)\n");
		break;
		default:
		printf("<unknown: %x>\n", e_type);
																							        }
}

void printEntryPoint(Elf64_Addr e_entry)
{
	    printf("  Entry Point Address:               %#lx\n", e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading file");
		close(fd);
		return (1);
	}

	checkElf(header.e_ident);
	printf("ELF Header:\n");
	printMagicNumbers(header.e_ident);
	printClass(header.e_ident);
	printDataEncoding(header.e_ident);
	printVersion(header.e_ident);
	printOsAbi(header.e_ident);
	printAbiVersion(header.e_ident);
	printType(header.e_type, header.e_ident);
	printEntryPoint(header.e_entry);

	close(fd);
	return (0);
}

