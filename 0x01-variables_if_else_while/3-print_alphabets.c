#include <stdio.h>
/**
 * main - Entry point
 * Description:prints all the alphabets in lower case
 *
 * Return: return all the alphabets
 */
int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; ++y)
	{
		putchar(y);
	}
	for (y = 'A'; y <= 'Z'; ++y)
	{
		putchar(y);
	}
	putchar("\n");
	return (0);
}
