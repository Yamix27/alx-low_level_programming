#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program print all base 16 numbers
 *		in lowercase.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int nbr;

	for (nbr = 0; nbr <= 15; ++nbr)
	{
		if (nbr < 10)
		{
			putchar('0' + nbr);
		}
		else
		{
			putchar('a' + nbr - 10);
		}
	}
	putchar('\n');

	return (0);
}
