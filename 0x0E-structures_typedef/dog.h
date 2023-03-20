#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog struct
 * @name: Name
 * @age: Age
 * @owner: Owner
 * Returns: Dog struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
