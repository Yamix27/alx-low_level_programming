#include "main.h"

/**
* _strcmp - Comparation of  2 Strings
* @s1: the compared first string
* @s2: the compared secound string
*
* Return: 0 if the strings are equal, a negative value if s1 is less than s2, a positive value if s1 is greater than s2
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
