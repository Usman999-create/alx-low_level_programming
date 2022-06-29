#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi - function that convert string to numbers
 * @s: parameter
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{

	s = _atoi(4);
	printf("%d\n", s);
	s = _atoi(-402);
	printf("%d\n", s);
	s = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", s);
	s = _atoi(214748364);
	printf("%d\n", s);
	s = _atoi(0);
	printf("%d\n", s);
	s = _atoi("Suite 402");
	printf("%d\n", s);
	s = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA");
	printf("%d\n", s);
	s = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", s);
	return (0);
}
