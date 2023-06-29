#include "main.h"

/**
* rot13 - using ROT13 cipher a String is encoded 
* @s: encoded String
*
* Return: Result encoded string
*/
char *rot13(char *s)
{
	int index, innerIndex;

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; s[index] != '\0'; index++)
	{
		for (innerIndex = 0; alphabet[innerIndex] != '\0'; innerIndex++)
		{
			if (s[index] == alphabet[innerIndex])
			{
				s[index] = rot13[innerIndex];
				break;
			}
		}
	}

	return (s);
}
