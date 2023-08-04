#ifndef _MAIN_L
#define _MAIN_L

int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int get_endianness(void);
int _putchar(char c);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int check_validity(const char *b);
#include <stddef.h>

#endif
