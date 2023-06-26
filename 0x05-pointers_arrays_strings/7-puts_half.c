#include "main.h"

/**
* puts_half - Outputs The Latter Half Of A Str.
*FOLLOWED BYANEW LINE 
* @str: STR To Be Printed
*/
void puts_half(char *str)
{
int len = 0;
int m, a;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
for (a = len / 2; str[a] != '\0'; a++)
{
_putchar(str[a]);
}
}
else
{
for (m = (len + 1) / 2; str[m] != '\0'; m++)
{
_putchar(str[m]);
}
}

_putchar('\n');
}
