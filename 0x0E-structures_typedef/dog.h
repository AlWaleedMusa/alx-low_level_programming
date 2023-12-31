#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

/**
 * dog_t - typedef for the struct dog.
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
