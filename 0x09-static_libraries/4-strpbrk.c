#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: parameter
 * @accept: parameter
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; *(accept + x) != 0; x++)
		{
			if (*s == *(accept + x))
				return (s);
		}
		s++;
	}
	return (0);
}
