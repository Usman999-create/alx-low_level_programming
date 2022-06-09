#include "main.h"
/**
 * _isupper - function
 *
 * @c: parameter
 *
 * Return: return value
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
