#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all lowercase and uppercase
 *		letters of the alphabet.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ++ltr)
	{
		putchar(ltr);
	}

	for (ltr = 'A'; ltr <= 'Z'; ++ltr)
	{
		putchar(ltr);
	}
	putchar('\n');

	return (0);
}
