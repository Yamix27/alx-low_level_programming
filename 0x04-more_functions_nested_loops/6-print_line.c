#include "main.h"

/**
  * print_line - draw a straight line in the terminal.
  * @n :parameter
  * Return: Nothing.
  */

void print_line(int m)
{
	if (m <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= m; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
