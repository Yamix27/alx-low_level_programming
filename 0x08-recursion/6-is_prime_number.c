#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	return (actual_prime(n, 2));
}

/**
 * actual_prime - checks if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int actual_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	return (actual_prime(n, i + 1));
}
