#include "main.h"

/**
* _strncat - appends n bytes from a string to another
* @dest: destination string
* @src: source string
* @n: number of bytes of str to append
*
* Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_index = 0, src_index = 0;

	while (dest[dest_index] != '\0')
		dest_index++;

	while (src[src_index] != '\0' && src_index < n)
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}

	dest[dest_index] = '\0';

	return (dest);
}

