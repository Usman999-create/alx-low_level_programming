#include <stdio.h>
/**
 * main - main function
 *
 * Return: return 0
 */
int main(void)
{
	long int t1 = 0;
	long int t2 = 1;
	long int sumPrevTwo = 0;
	long int sumEven = 0;
	long int maxFibTerm = 4000000;
	int i = 1;

	while (t1 < maxFibTerm && t2 < maxFibTerm)
	{
		sumPrevTwo = t1 + t2;
		sumEven += (((sumPrevTwo % 2) == 0) ? sumPrevTwo : 0);
		t1 = t2;
		t2 = sumPrevTwo;
		i++;
	}
	printf("%ld\n", sumEven);

	return (0);
}
