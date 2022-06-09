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
		_putchar(1);
	else
		_putchar(0);
	_putchar('\n');
}
