#ifndef DOG_H
#define DOG_H

/**
 * struct dog - sturcture dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the dog owner
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