#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single digit
 *		numbers starting from 0.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int nbr;

	for (nbr = 0; nbr < 10; ++nbr)
	{
		printf("%d", nbr);
	}
	printf("\n");

	return (0);
}
