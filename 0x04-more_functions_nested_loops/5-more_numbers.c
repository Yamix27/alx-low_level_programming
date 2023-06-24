#include "main.h"

/**
 * more_numbers - check the code.
 *
 * Return: Nothing.
 */

void more_numbers(void)
{
	int a, num;

	for (a = 0; a < 10; a++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar ('0' + num / 10);
			}
			_putchar ('0' + num % 10);
		}
		_putchar('\n');
	}
}
