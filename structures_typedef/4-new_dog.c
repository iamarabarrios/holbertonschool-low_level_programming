#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - create a new dog
 *@name: char
 *@age: float
 *@owner: char
 *Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a;
	int b;
	int i;

	dog_t *dog;

	a = b = 0;
	while (name[a++])
		;
	while (owner[b++])
		;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(a * sizeof(dog->name));
	if (dog == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		dog->name[i] = name[i];

	dog->age = age;

	dog->owner = malloc(b * sizeof(dog->owner));
	if (dog == NULL)
		return (NULL);
	for (i = 0; i < b; i++)
		dog->owner[i] = owner[i];

	return (dog);

}
