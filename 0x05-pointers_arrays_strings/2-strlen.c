#include "main.h"

/**
* _strlen - The function returns the length of a string
* @s: The string to be evaluated.
*
* It Returns: The string's length.
*/
int _strlen(char *s)
{
int a;

a= 0;
while (s[a] != '\0')
{
a++;
}

return (a);
}
