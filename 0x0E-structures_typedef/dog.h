#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this is a dog struct
 * @name: name of dog
 * @age: age if dog
 * @owner: owner name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#include <stdlib.h>
#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
