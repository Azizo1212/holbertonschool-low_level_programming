#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * *_strcpy - copies the string pointed
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	new_d->name = malloc(sizeof(char) * (len1 + 1));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	new_d->owner = malloc(sizeof(char) * (len2 + 1));
	if (new_d->owner == NULL)
	{
		free(new_d);
		free(new_d->name);
		return (NULL);
	}
	_strcpy(new_d->name, name);
	_strcpy(new_d->owner, owner);
	new_d->age = age;

	return (new_d);
}
