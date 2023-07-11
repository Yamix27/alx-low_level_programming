#include "main.h"

/**
  * _strdup - Return a pointer to a newly allocated space in memory.
  *
  * @str: Char parameter.
  *
  * Return: Pointer to new string.
  */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length, i;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
