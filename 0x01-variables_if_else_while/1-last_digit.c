#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that assign a random number n each time it is executed
 *
 * Return: return 1 of 3 option
 */
int main(void)
{
	int n;
	int num;
	num = n % 20;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (num > 5) 
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}
	else if (num == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, num);
	}
	else
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, num);
	}
	return (0);
}

