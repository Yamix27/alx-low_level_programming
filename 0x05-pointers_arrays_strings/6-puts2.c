
#include "main.h"

/**
* puts2 -  func prints every other char of str
* FOLLOWED BY ANEW LINE
*@str: string to print the char from
*/
void puts2(char *str)
{
int len = 0;
int z;

while (str[len] != '\0')
{
len++;
}

for (z = 0; i < len; z += 2)
{
_putchar(str[z]);
}
_putchar('\n');
}
