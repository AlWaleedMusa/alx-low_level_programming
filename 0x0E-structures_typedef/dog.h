#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - struct that define dog details.
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: name dog's name, age is dog's age, owner is dog's owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
