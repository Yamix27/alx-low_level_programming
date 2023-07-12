#include "main.h"

/**
  * main - Entry point of the program.
  *
  * @argc: The number of command-line arguments.
  * @argv: An array of strings containing the command-line arguments.
  *
  * Return: Always 0 (success).
  */

int main(int argc, char *argv[])
{
	int cents, num_coins, count, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0; i < num_coins; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", count);

	return (0);
}
