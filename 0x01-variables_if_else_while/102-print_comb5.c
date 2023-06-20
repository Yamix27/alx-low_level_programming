#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program print all possible combinations
 *		of two two-digit numbers.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int number1;
	int number2;

	for (number1 = 0; number1 <= 9; ++number1)
	{
		for (number2 = number1 + 1; number2 <= 9; ++number2)
		{
			putchar('0' + number1);
			putchar('0' + number2);
			if (number1 != 7 || number2 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
