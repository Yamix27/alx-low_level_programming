#include "main.h"

/**
* print_rev - Prints a string in reverse, followed by a new line.
* @s: String to be printed.
*/
void print_rev(char *s)
{
int a = 0;
int len = 0;

while (s[a] != '\0')
{
len++;
a++;
}

for (a = len - 1; a >= 0; a--)
{
_putchar(s[a]);
}

_putchar('\n');
}
