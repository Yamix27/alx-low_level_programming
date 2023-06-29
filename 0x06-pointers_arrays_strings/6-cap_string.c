#include "main.h"

/**
* cap_string - all words of the String are captilized
* @s: THE STRING
*
* Return: String that is captlized
*/
char *cap_string(char *s)
{
	int index, innerIndex;

	char spe[13] = {20, 9, '\n', 28, 92, 125, 123, 46, 34, 33, 63, 59, 32};

	for (index = 0; s[index] != '\0'; index++)
	{
		if (index == 0 && s[index] >= 'a' && s[index] <= 'z')
			s[index] -= 32;

		for (innerIndex = 0; innerIndex < 13; innerIndex++)
		{
			if (s[index] == spe[innerIndex])
			{
				if (s[index + 1] >= 'a' && s[index + 1] <= 'z')
					s[index + 1] -= 32;
			}
		}
	}

	return (s);
}
