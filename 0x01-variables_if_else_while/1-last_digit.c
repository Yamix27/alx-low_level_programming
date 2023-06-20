#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number, extracts its
 *		last digit using the modulo operator (%), and prints
 *		the results.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int n;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastD = n % 10;
	if (lastD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
	}
	else if (lastD == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastD);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
	}

	return (0);
}
