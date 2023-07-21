#include "function_pointers.h"

/**
  * print_name - Print a name using a function pointer.
  *
  * @name: Name of the person.
  * @f: Function pointer to the function that will print the name.
  *
  * Return: Nothing.
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
