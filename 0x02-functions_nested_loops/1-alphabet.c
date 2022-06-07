#include "main.h"
/**
 * print_alphabet - use putchar to print a to z alphabets
 *
 */
void print_alphabet(void)
{
	int ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
