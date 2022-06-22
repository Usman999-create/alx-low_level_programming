#include "main.h"
/**
 * factorial - function that return the factorial
 * of another given number
 *
 * @n: parameter
 *
 * Return: end program
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}

	return (0);
}
