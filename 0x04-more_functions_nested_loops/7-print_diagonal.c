#include "main.h"

/**
  * print_diagonal - draw a diagonal line on the terminal.
  * @n :parameter
  * Return: Nothing.
  */

void print_diagonal(int m)
{
	int b = 0;
	int c;

	while (b < m)
	{
		c = b;
		while (c--)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
		b++;
	}

	if (m <= 0)
		_putchar('\n');
}
