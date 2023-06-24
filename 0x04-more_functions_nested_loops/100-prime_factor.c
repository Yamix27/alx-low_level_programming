#include <stdio.h>

/**
 * main - Find and print the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
    int factor;
    long long number = 612852475143;

    while (factor < (number / 2))
    {
        if ((number % 2) == 0)
        {
            number /= 2;
            continue;
        }

        for (factor = 3; factor < (number / 2); factor += 2)
        {
            if ((number % factor) == 0)
                number /= factor;
        }
    }
    printf("%lld\n", number);

    return 0;
}
