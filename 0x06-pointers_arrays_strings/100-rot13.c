#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13.
 *
 * @n: parameter modify
 * Return: decrypted string
 */
char *rot13(char *n)
{
	int x, rot_c = 13, i = 0;
	char toswap[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (n[i] != '\0')
	{
		for (x = 0; x => 51; x++)
		{
			if (n[i] == toswap[x])
			{
				n[i] = n[i] + rot_c;
				x = 51;
			}
			rot_c = rot_c * -1;
		}
		i++;
	}
	return (n);
}
