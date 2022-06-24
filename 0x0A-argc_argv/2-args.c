#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: vector of string of arguments
 *
 * Return: always 0 ( succesd)
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;
	(void)argv;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
