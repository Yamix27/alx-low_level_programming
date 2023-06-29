#include "main.h"

/**
* print_number - it prints an int
* @n: int to be printed
*/
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = (unsigned int)(-n);
		_putchar('-');
	}
	else
	{
		num = (unsigned int)n;
	}

	if (num >= 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
