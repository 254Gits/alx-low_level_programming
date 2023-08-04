unsigned long int set_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (n);

		mask = 1UL << index;
	return (n | mask);
}
