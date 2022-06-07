#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int ch, c;

	for (ch = 0; ch <= 9; ch++)
	{
		for (c = 'a'; c >= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
