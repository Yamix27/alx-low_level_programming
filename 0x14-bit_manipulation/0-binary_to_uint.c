#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string representing a binary number.
 *
 * Return: The unsigned int value of the binary number, or 0 if b is NULL or
 *         contains a character that is not '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		total = (total << 1) | (b[i] - '0');
	}

	return (total);
}
