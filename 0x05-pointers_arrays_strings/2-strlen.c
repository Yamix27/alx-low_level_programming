#include "main.h"

/**
* _strlen - Returns the length of a string.
* @s: Pointer to the string.
*
* Return: The length of the string, which is the number of characters in the string
*         excluding the null terminator ('\0').
*/

int _strlen(char *s)
{
int a;

a = 0;
while (s[a] != '\0')
{
a++;
}

return (a);
}
