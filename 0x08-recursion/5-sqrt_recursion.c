#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to calculate the square root for
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}

/**
 * _sqrt - helper function for _sqrt_recursion
 * @n: number to calculate the square root for
 * @i: current value to check for square root
 *
 * Return: square root of n if found, -1 otherwise
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
