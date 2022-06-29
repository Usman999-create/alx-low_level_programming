#include "main.h"
/**
 * *_strstr - that locates a substring.
 *
 * @haystack: parameter
 * @needle: paameter
 *
 * Return: pointer to the beginning of the located substring
 * or Null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != 0; x++)
	{
		for (y = 0; needle[y] != 0; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&haystack[x]);
	}
	return (0);
}
