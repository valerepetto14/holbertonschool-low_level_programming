#include "dog.h"
#include "stdlib.h"

int largo(char *a);
/**
 *new_dog - struct
 *@name: char
 *@age: float
 *@owner: char
 *Return: dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *perro;
	int size = 0, size1 = 0, cont = 0, cont1 = 0;

	if (name && owner)
	{
	size = largo(name);
	size++;
	size1 = largo(owner);
	size1++;
	perro = malloc(sizeof(dog_t));
	if (perro == NULL)
		return (NULL);
	perro->name = malloc(sizeof(char) * size);
	if (perro->name == NULL)
	{
		free(perro);
		return (NULL);
	}
	while (name[cont])
	{
		perro->name[cont] = name[cont];
		cont++;
	}
	perro->age = age;
	perro->owner = malloc(sizeof(char) * size1);
	if (perro->owner == NULL)
	{
		free(perro->name);
		free(perro);
		return (NULL);
	}
	while (owner[cont1])
	{
		perro->owner[cont1] = owner[cont1];
		cont1++;
	}
	return (perro);
	}
	return (NULL);
}
/**
 * largo - largo
 * @a:char
 * Return: int
 **/
int largo(char *a)
{
	int size = 0;

	while (a[size] != '\0')
	size++;
	return (size);
}

