#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function
 * @n: parameter n input
 *
 * Return: always 0 (success)
 */
void print_to_98(int n)
{
	int upper = 98;

	if (n < upper)
	{
		while (n <= upper)
		{
			printf("%d", n);
			if (n != upper)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > upper)
	{
		while (n >= upper)
		{
			printf("%d", n);
			if (n != upper)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
