#include "main.h"

/**
* puts2 - The function prints every other character of a string
* Followed By A New Line.
* @str: The string from which the characters are to be printed.
*/
void puts2(char *str)
{
int z;

for (z = 0; str[z] != '\0'; z += 2)
{
_putchar(str[z]);
}

_putchar('\n');
}
