#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program print all possible different
 *		combinations of three digits.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int number1;
	int number2;
	int number3;

	for (number1 = 0; number1 <= 9; ++number1)
	{
		for (number2 = number1 + 1; number2 <= 9; ++number2)
		{
			for (number3 = number2 + 1; number3 <= 9; ++number3)
			{
				putchar('0' + number1);
				putchar('0' + number2);
				putchar('0' + number3);
				if (number1 != 7 || number2 != 8 || number3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
