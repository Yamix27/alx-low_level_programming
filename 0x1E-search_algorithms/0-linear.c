#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
	* linear_search - search fr  value in an array usin the Linear search algrthm.
	*@array: Pointer to the first element of the array.
	*@size: Number of elements in the array.
	*@value: Value to search for.
	*Return: value is found, return index of first occurrence of value
	*in array. If the value is not found or the array is NULL, return -1.
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
