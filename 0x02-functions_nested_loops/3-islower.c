#include "main.h"
/**
 * print - int _islower(int c)
 *
 */
int _islower(int c)
{
	int c;
	
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
