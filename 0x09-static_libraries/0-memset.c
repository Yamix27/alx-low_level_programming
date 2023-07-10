#include "main.h"

/**
 * _memset - Fill memory with a constant byte.
 * @s: memory area to be filled.
 * @b: Constant byte.
 * @n: Bytes of the memory area.
 *
 * Return: Pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (n == 0)
		return (s);

	*s = b;
	return (_memset(s + 1, b, n - 1));
}
