#ifndef DOG_H
#define DOG_H
/**
* struct dog - define a new type
* @name: char
* @age: float
* @owner: owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
