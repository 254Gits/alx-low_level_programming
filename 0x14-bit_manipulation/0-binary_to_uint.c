#include "main.h"

/**
 * check_validity - check for string
 * @b: character
 *
 * Return : 1
 */

int check_validity(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		b++;
	}
	return (1);
}

/**
 * binary_to_uint - binary holder
 * @b: pointer
 *
 * Return: Decimal
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int d = 0;
	int cdse = 1, str_len = 0;

	if(!check_validity(b))
	{
		return (0);
	}

	while (b[str_len]!= '\0')
	{
		str_len++;
	}

	while(str_len)
	{
		d += ((b[str_len -1] - '0') * cdse);
		cdse *=2;
		str_len--;
	}
	return (d);
}
