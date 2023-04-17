#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 *  @d: pointer to the dog structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("nil\n");
		if (d->age > 0)
			printf("Age: %f\n", d->age);
		else
			printf("nil\n");
		if (d->owner != NULL)
			printf("Name: %s\n", d->owner);
		else
			printf("nil\n");
	}
}
