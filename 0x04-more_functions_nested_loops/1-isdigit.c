#include "main.h"
/**
 * _isdigit - function
 *
 * @c: parameter
 *
 * Return: return Value
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
	_putchar('\n');
}
