#include "main.h"
/**
 *_isalpha - function to know if
 * the character is a letter or not
 * @c: variable to evaluate
 *
 * Return: Get 1 if it's a letter,
 * 0 otherwise
 */
int _isalpha(int c)
{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
