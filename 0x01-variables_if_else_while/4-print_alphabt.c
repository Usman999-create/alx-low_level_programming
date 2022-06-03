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

for (c = 'a'; c <= 'z'; ++c)
{
if (c == 'e' || c == 'q')
{
}
else
{
putchar(c);
}
}
putchar('\n');
return (0);
}
