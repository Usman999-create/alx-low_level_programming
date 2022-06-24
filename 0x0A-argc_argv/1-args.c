#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: arg count
 * @argv: vector of string with arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

