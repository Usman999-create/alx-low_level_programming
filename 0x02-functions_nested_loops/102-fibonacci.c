#include <stdio.h>
/**
 * main - main function
 *
 * Return: return 0
 */
int main(void)
{
	long int x, a = 1, b = 1, z;

	printf("%ld", a);
	for (x = 1; x < 50; x++)
	{
		z = a + b;
		printf(", %ld", z);
		a = b;
		b = z;
	}
	putchar(10);

	return (0);
}
