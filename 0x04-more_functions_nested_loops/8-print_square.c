#include "main.h"

/**
 * print_square - function
 * @sideLength: parameter
 * Return: nothing
 */

void print_square(int sideLength)
{
    int row, col;

    if (sideLength <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (row = 0; row < sideLength; row++)
        {
            for (col = 0; col < sideLength; col++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
