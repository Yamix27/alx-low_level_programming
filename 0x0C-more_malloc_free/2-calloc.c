#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array, using malloc.
 * @nmemb: Unsigned int parameter input size 1.
 * @size: Unsigned int parameter, the size..
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *charPtr;
	void *ptr;
	unsigned int totalSize, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	totalSize = nmemb * size;

	ptr = malloc(totalSize);
	if (ptr == NULL)
		return (NULL);

	charPtr = (char *)ptr;
	for (i = 0; i < totalSize; i++)
		charPtr[i] = 0;

	return (ptr);
}
