#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program print all possible combinations
 *		of single-digit numbers.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int nbr;

	for (nbr = 0; nbr <= 9; ++nbr)
	{
		putchar('0' + nbr);
		if (nbr != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
