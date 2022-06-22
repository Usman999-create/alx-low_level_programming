#include "main.h"
/**
 * is_prime - prime
 * @x: number
 * @y: number
 *
 * Return: return 0 if not prime
 * return 1 if prime
 */
int is_prime(int x, int y)
{
	if ((x % y) == 0 && y < x)
		return (0);
	if (x == y)
		return (1);
	else
		return (is_prime(x, y + 1));
}
/**
 * is_prime_number - verifica si es numero primo
 * @n: verification number
 * Return: return 0 if prime
 * and 1 if prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
