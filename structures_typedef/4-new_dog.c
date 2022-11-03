#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: String
 * Return: 0
 */

char *_strdup(char *str)
{
int i, n;
char *s;
	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (n = 0; n <= i; n++)
	{
		s[n] = str[n];
	}
	return (s);
}

/**
 * new_dog - Write a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *max;
char *newname, *newowner;

max = malloc(sizeof(dog_t));
if (max == NULL)
	return (NULL);

newname = _strdup(name);
if (newname == NULL)
{
	free(max);
	return (NULL);
}
newowner = _strdup(owner);
if (newowner == NULL)
{
	free(newname);
	free(max);
	return (NULL);
}

max->name = newname;
max->age = age;
max->owner = newowner;
return (max);
}
