#include "main.h"
/**
 * set_string - function that set the vlaue
 * of a pointer to char
 *
 * @s: pointer to change
 * @to: string to change pointer to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
