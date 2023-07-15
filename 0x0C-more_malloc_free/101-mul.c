#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - Checks if the given string represents a valid number.
 * @str: The string to check.
 *
 * Return: 1 if the string is a valid number, 0 otherwise.
 */
int is_valid_number(const char *str)
{
    if (*str == '\0')
        return 0;

    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }

    return 1;
}

/**
 * multiply_numbers - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */
unsigned long long multiply_numbers(const char *num1, const char *num2)
{
    unsigned long long result = 0;

    while (*num1)
    {
        unsigned long long digit1 = *num1 - '0';
        unsigned long long temp = 0;
        const char *ptr = num2;

        while (*ptr)
        {
            unsigned long long digit2 = *ptr - '0';
            temp = (temp * 10) + (digit1 * digit2);
            ptr++;
        }

        result = (result * 10) + temp;
        num1++;
    }

    return result;
}

/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    unsigned long long num1 = strtoull(argv[1], NULL, 10);
    unsigned long long num2 = strtoull(argv[2], NULL, 10);
    unsigned long long result = multiply_numbers(argv[1], argv[2]);

    printf("%llu\n", result);

    return (0);
}

