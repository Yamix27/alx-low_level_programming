#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: string to search within
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the found substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *one, *two;

	while (*haystack != '\0')
	{
		one = haystack;
		two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return haystack;

		haystack++;
	}

	return NULL;
}
