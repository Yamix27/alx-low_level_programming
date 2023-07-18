#include "dog.h"
#include <stddef.h> // For NULL

/**
  * init_dog - function that initializes a variable of type struct dog.
  *
  * @d: Pointer to the struct dog.
  * @name: Name of the dog.
  * @age: Age of the dog.
  * @owner: Owner of the dog.
  *
  * Return: Nothing.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

/**
 * print_dog - function that prints a struct dog.
 *
 * @d: Pointer to the struct dog to be printed.
 *
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}

/**
 * new_dog - function that creates a new struct dog.
 *
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the newly created struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}

	return (new_dog);
}

/**
 * free_dog - function that frees the memory allocated for a struct dog.
 *
 * @d: Pointer to the struct dog to be freed.
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
