#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * *new_dog - unction that creates a new dog.
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner
 * Return: new dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogie = malloc(sizeof(dog_t));
	if (dogie == NULL)
		return (NULL);

	dogie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogie->name == NULL)
	{
		free(dogie);
		return (NULL);
	}
	dogie->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (dogie->owner == NULL)
	{
		free(dogie->name);
		free(dogie);
		return (NULL);
	}

	_strcpy(dogie->name, name);
	dogie->age = age;
	_strcpy(dogie->owner, owner);

	return (dogie);
}

/**
 * _strlen - Returns the length of a string
 * @s: the string
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return (count);
}

/**
 * *_strcpy - copies thae second string in the first one
 * @dest: first string
 * @src: second string
 * Return: first string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
