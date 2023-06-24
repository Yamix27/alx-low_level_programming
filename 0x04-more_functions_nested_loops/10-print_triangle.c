/*
 * File: 10-print_triangle.c
 * Auth: AMYNE_BOUTALLAGHT
 */

#include "main.h"

/**
 * print_triangle - Print a triangle.
 *
 * @size: The size of the triangle.
 *
 * Return: Nothing.
 */
void print_triangle(int size)
{
    int row, col;

    if (size > 0)
    {
        for (row = 1; row <= size; row++)
        {
            for (col = size - row; col > 0; col--)
                putchar(' ');

            for (col = 0; col < row; col++)
                putchar('#');

            if (row == size)
                continue;

            putchar('\n');
        }
    }

    putchar('\n');
}
