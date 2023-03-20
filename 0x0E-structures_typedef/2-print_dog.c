#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Pring dog func
 * @d: Dog struct
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (!d->name)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (!d->age)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %g\n", d->age);
	}
	if (!d->owner)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->owner);
	}
}
