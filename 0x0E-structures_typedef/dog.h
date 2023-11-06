#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct that define dog details.
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: name will be the name of the dog, age is the age of the dog in float numbers, owner is the name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
