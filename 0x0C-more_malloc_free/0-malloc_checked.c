#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc.
 * @b: Unsigned int parameter, the bytes to allocate.
 *
 * Return: Pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *allocate = malloc(b);

	if (allocate == NULL)
		exit(98);

	return (allocate);
}
