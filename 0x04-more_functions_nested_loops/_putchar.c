#include "main.h"
#include <unistd.h>
/**
 * _putchar - This Writes the Char c to stdout
 * @c: The Char to be  Printed
 *
 * Return: 1 On Success.
 * On error,   Return -1 , And errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
