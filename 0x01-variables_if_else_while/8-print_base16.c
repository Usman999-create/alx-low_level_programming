#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the alphabets in lower case
 *
 * Return: return all the alphabets
 */
int main(void)
{
char c;
int a;

for (a = 0; a < 10; ++a)
{
putchar((a) + '0');
}
for (c = 'a'; c <= 'f'; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
