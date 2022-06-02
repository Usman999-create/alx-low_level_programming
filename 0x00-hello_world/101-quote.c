#include <unistd.h>
/**
* main - Entry point
*
* Description: print a qoute using a write function
*
* Return: return error 1
*/
int main(void)
{
char n[] = "and that piece of art is useful\" - Dora korpar, Dora Korpar, 2015-10-19\n";
write(stderr, "%s\n", n);
return (1);
}
