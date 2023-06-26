#include <stdio.h>
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
srand(time(NULL));

int length = rand() % 11 + 10;
char password[length + 1];
int i;

for (i = 0; i < length; i++)
{
int type = rand() % 3;
int offset;

if (type == 0)
{
offset = rand() % 26;
password[i] = 'a' + offset;
}
else if (type == 1)
{
offset = rand() % 26;
password[i] = 'A' + offset;
}
else
{
offset = rand() % 10;
password[i] = '0' + offset;
}
}

password[i] = '\0';

printf("%s\n", password);

return (0);
}
