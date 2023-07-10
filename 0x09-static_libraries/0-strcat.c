#include "main.h"

/**
 * _strcat - Concatenate two strings.
 * @dest: String that will be appended.
 * @src: String to be concatenated upon.
 *
 * Return: Pointer to @dest.
 */
char *_strcat(char *dest, char *src)
{
	if (*src == '\0')
		return dest;

	if (*dest == '\0')
	{
		*dest = *src;
		return _strcat(dest + 1, src + 1);
	}

	return _strcat(dest + 1, src);
}
