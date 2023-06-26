#include "main.h"

/**
* *_strcpy - Copies src string.
* Including the Terminating Null Byte (\0)
* to the buffer pointed to by dest
* @dest: pointer the buffer  Which we Copy The String
* @src: String To be Copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, const char *src)
{
int z = 0;

while (src[z] != '\0')
{
dest[z] = src[z];
z++;
}
dest[z] = '\0';

return dest;
}
