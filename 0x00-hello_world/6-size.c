#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0(Succes)
 */
int main(void)
{
	int i;
	double d;
	char c;
	long int li;
	float f;
	long long int ll;

	printf("Size of a char:%lu byte(s)\n", sizeof(c));
	printf("Size of an int:%lu byte(s)\n", sizeof(i));
	printf("Size of a long int:%lu byte(s)\n", sizeof(li));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(ll));
	printf("Size of a float:%lu byte(s)\n", sizeof(f));

	return (0);
}
