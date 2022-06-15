#include "main.h"
#include <stdio.h>
/**
 * *_strcat - function
 * @dest: parameter
 * @src: parameter
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
