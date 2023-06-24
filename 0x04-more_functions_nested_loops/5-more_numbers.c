#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: nothing
 */

void more_numbers(void)
{
int the_line;

	for (the_line = 0; the_line <= 9; the_line++)
	{
		int number;

		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar (number / 10 + 48);
			}
			_putchar (num % 10 + 48);
		}
		_putchar('\n');
	}
}
