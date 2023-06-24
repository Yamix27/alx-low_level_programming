#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 *
 * @num: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of the number.
 */
long largest_prime_factor(long num)
{
    long largest_prime = -1;
    int i;

    while (num % 2 == 0)
    {
        largest_prime = 2;
        num /= 2;
    }

    for (i = 3; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            largest_prime = i;
            num /= i;
        }
    }

    if (num > 2)
        largest_prime = num;

    return largest_prime;
}

int main(void)
{
    long number = 612852475143;
    long largest_prime = largest_prime_factor(number);

    printf("The largest prime factor of %ld is %ld\n", number, largest_prime);

    return 0;
}

