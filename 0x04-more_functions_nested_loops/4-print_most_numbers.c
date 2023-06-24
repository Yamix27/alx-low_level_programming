#include "main.h"

/**
 * print_most_numbers - Check The Code.
 *
 * Return: This retunrs  Nothing.
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
			_putchar (num);
	}
	_putchar ('\n');
}
