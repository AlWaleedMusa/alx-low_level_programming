#include "dog.h"

/**
 * new_dog - function that make a new struct dog_t.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner name of the dog.
 * Return: a new dog_t struct.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int l_1;
	int l_2;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	l_1 = strlen(name);
	l_2 = strlen(owner);

	new_dog->name = malloc(sizeof(char) * (l_1 + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (l_2 + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
