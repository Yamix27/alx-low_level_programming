#include "main.h"

/**
* *_strcpy - Copies the source string (src).
* InCludes the Null char (\0)
* Copies to dest buffer.
* @dest: Pointer To the BuffeR in which we copy the string
* @src: string to be copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int len, z;

len = 0;

while (src[len] != '\0')
{
len++;
}

for (z = 0; z < len; z++)
{
dest[z] = src[z];
}
dest[z] = '\0';

return (dest);
}
