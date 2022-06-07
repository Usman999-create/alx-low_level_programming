#include "main.h"
/**
 * main - Entry point
 *
 * Description: Write a function that prints 1-alphabet.c, in lowercase
 *
 * Return: return 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		-putchar(ch);
	}
	_putchar('\n');

	return (0);
}
