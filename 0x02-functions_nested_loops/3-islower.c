#include "main.h"
/**
 * print - int _islower(int c)
 *
 */
int _islower(int c)
{
	char ch;

	if (ch >= 'c' && ch <= 'C')
	{
		_putchar(c);
	}
	else 
	{
		_putchar(0);
	}
	_putchar('\n');
	return (0);
}
