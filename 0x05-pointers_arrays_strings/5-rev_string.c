#include "main.h"

/**
* rev_string - The string is reversed.
* @s: The string that is to be reversed.
*/
void rev_string(char *s)
{
int a = 0;
int len = 0;
char tmp;

while (s[len] != '\0')
{
len++;
}

len--;

for (a = 0; a < len; a++, len--)
{
tmp = s[a];
s[a] = s[len];
s[len] = tmp;
}
}
