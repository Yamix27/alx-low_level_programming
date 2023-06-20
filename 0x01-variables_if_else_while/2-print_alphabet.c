#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all lowercase letters
 *		of the alphabet.
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
	putchar('\n');

	return (0);
}
