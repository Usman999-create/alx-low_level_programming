#include "main.h"
/**
 * _islower - function to check lowwercase
 * @c:The character to eveluate
 *
 *Return: Get 1 if c is uppercase,
 *otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
