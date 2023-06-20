#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in reverse.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	char ltr;

	for (ltr = 'z'; ltr >= 'a'; --ltr)
	{
		putchar(ltr);
	}
	putchar('\n');

	return (0);
}
