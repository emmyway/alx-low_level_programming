#include "dog.h"

/**
 * _strlen - counts length of string
 * @str: pointer to streing to be counted
 * Return: length of string
 */
int _strlen(*str)
{
	int len;

	len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * _strcpy - copies strring from source to dest buffer
 * @src: pointer to source to be copied
 * @dest: pointer to buffer to be copied to
 * Return: pointer to dest buffer
 */
char *_strcpy(*dest, *src)
{
	int i, len;

	len = _strlen(src);

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: string name of dog
 * @age: the age thereof
 * @owner: the string name if owner
 * Return: dog, the copy of struct type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name == malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(owner);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
