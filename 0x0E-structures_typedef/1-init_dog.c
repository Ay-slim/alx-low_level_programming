#include "dog.h"

/**
 * init_dog - Initialize a dog
 * @d: Dog struct
 * @name: Name of the dog
 * @age: Dog age
 * @owner: Owner
 * Returns: Pointer to dog struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
