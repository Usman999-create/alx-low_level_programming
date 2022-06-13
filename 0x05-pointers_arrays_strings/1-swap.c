#include <stdio.h>
#include "main.h"
/**
 * swap_int - function
 * @a: parameter
 * @b: parameter
 *
 * Retrun: Always 0
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
