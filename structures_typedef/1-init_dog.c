#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: The variable to initialize
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
