/**
 *flip_bits - entry point
 *@n: long interger
 *@m: flippeing interger
 *
 *Return: Nothing
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int now = n ^ m;
	unsigned int note = 0;

	while (now != 0)
	{
		note += now & 1;
		now >>= 1;
	}
	return (note);
}
