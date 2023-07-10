#include "main.h"

/**
  * _strpbrk - Searche a string for any of a setof bytes.
  *
  * @s: String to search.
  * @accept: String containing the bytes to look for.
  *
  * Return: Pointer to the byte in s.
  */

char *_strpbrk(char *s, char *accept)
{
	char *c;

	while (*s)
	{
		c = accept;
		while (*c)
		{
			if (*s == *c)
			{
				return (s);
			}
			c++;
		}
		s++;
	}

	return ('\0');
}
