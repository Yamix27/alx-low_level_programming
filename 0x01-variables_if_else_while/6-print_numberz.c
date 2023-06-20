#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single digit
 *		numbers of base 10 starting from 0.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int nbr;

	for (nbr = 0; nbr < 10; ++nbr)
	{
		putchar('0' + nbr);
	}
	putchar('\n');

	return (0);
}
