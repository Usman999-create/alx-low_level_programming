#include "main.h"
/**
 * _strlen - function
 * @s: parameter s
 *
 * Return: return valule n
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
