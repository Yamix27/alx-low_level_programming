#include "main.h"

/**
* _strcat - appends the string referenced by @src to
* at the end of the string referenced by @dest
* @dest: The string that will be added
* @src: The string upon which concatenation will be performed.
*
* Return: Returns Pointer to @dest
*/
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
