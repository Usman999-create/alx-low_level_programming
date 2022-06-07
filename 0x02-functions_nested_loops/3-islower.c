#include "main.h"
/**
 * print - int _islower(int c)
 *
 */
int _islower(int c)
{
	int r;
	
	if (r >= 97 && r <= 122)
	{
		_putchar(1);
	}
	else 
	{
		_putchar(0);
	}
	_putchar('\n');
	return (0);
}
