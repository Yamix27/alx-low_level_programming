#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
* main - Program that generates random valid
* passwords for the program 101-crackme
*
* Return: Always 0 (Success)
*/
int main(void)
{
int password[100];
int index, total, value;

total = 0;

srand(time(NULL));

for (index = 0; index < 100; index++)
{
password[index] = rand() % 78;
total += (password[index] + '0');
putchar(password[index] + '0');
if ((2772 - total) < 78)
{
value = 2772 - total;
total += value;
putchar(value + '0');
break;
}
}

putchar('\n');

return (0);
}
