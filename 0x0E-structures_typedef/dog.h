#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - Structure representing a dog.
  *
  * @name: Name of the dog
  * @age: Age of the dog
  * @owner: Owner of the dog
  *
  * This structure represents a dog and is used to store
  * information about individual dogs within a program.
  * It consists of three members: 'name' which is a character
  * pointer holding the name of the dog, 'age' which is a float
  * indicating the age of the dog, and 'owner' which is a character
  * pointerrepresenting the owner of the dog.
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
