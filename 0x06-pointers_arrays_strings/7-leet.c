#include "main.h"

/**
* leet - Converts a string into 1337 encoding.
* @s: Encoded String
*
* Return: Result String
*/
char *leet(char *s)
{
	int index, innerIndex;

	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (index = 0; s[index] != '\0'; index++)
	{
		for (innerIndex = 0; innerIndex < 10; innerIndex++)
		{
			if (s[index] == letters[innerIndex])
			{
				s[index] = numbers[innerIndex];
				break;
			}
		}
	}

	return (s);
}
