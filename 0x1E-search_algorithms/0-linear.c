#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
	*linear_search - search for value in array using Linear search algorithm.
	*@array: Pointer to first element of array.
	*@size: Number of elements in array.
	*@value: Value to search for.
	*Return: first occurrence of value in array, -1 not found or array is NULL.
	*/

int linear_search(int *array, size_t size, int value) /* @value: Vlue srch 4 */
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
