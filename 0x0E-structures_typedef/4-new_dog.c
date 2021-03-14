#include <stdlib.h>
#include "dog.h"

/**
 * copy - copy string
 *
 * @dest: copied to
 * @src: source
 *
 * Return: dest
 */
char *copy(char *dest, char *src)
{
	int count;

	for (count = 0; *(src + count) != '\0'; count++)
		*(dest + count) = *(src + count);

	*(dest + count) = '\0';
	return (dest);
}

/**
 * new_dog - new struct dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: mem, NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *mem;

	mem = malloc(sizeof(dog_t));
	if (mem == NULL)
		return (NULL);

	mem->name = malloc(sizeof(name) + 1);
	if (mem->name == NULL)
	{
		free(mem);
		return (NULL);
	}

	mem->owner = malloc(sizeof(owner) + 1);
	if (mem->owner == NULL)
	{
		free(mem->name);
		free(mem);
		return (NULL);
	}
	copy((mem->name), name);
	mem->age = age;
	copy((mem->owner), owner);

	return (mem);
}
