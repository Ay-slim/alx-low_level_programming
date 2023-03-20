#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: Dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_struct;
	char *dog_name;
	char *dog_owner;
	int name_len = strlen(name);
	int owner_len = strlen(owner);

	new_dog_struct = malloc(sizeof(dog_t));
	if (!new_dog_struct)
	{
		free(new_dog_struct);
		return (NULL);
	}
	dog_name = malloc(sizeof(char) * (name_len + 1));
	if (!dog_name)
	{
		free(new_dog_struct);
		free(dog_name);
		return (NULL);
	}
	dog_owner = malloc(sizeof(char) * (owner_len + 1));
	if (!dog_owner)
	{
		free(new_dog_struct);
		free(dog_owner);
		return (NULL);
	}
	new_dog_struct->name = strcpy(dog_name, name);
	new_dog_struct->age = age;
	new_dog_struct->owner = strcpy(dog_owner, owner);

	return (new_dog_struct);
}
