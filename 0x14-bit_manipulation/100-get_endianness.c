/**
 * get_endianness - determines little edian
 *
 * Return: 1 if big edian and 1 if little
 */
int get_endianness(void)
{
	unsigned int test = 1;
	unsigned char *endian = (unsigned char *)&test;


	if (*endian == 1)
		return (1);

	else
		return (0);
}
