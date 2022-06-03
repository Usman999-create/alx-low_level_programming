#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all the alphabets in lower case
 *
 * Retrun: return all the alphabets
 */
int main(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
	{
		putchar(L);
	}
	putchar('\n');
	return (0);
}
