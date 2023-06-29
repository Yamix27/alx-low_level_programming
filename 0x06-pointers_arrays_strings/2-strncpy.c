#include "main.h"

/**

*_strncpy - Copies a string up to a specified number of bytes
*@dest: Pointer to the destination string
*@src: Pointer to the source string
*@n: Num of bytes to be copied
*Return: Pointer to the resulting string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] && index < n)
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
