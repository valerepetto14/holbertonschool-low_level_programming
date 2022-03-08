#include "dog.h"
#include "stdlib.h"
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

	while (name[size] != '\0')
		size++;
	while (owner[size1] != '\0')
		size1++;

	perro = malloc(sizeof(dog_t));

	if (perro == NULL)
		return (NULL);

	perro->name = malloc(sizeof(char) * size);
	perro->owner = malloc(sizeof(char) * size1);

	if (perro->name == NULL)
	{
		free(perro);
		return (NULL);
	}
	if (perro->owner == NULL)
	{
		free(perro->name);
		free(perro);
		return (NULL);
	}

	while (cont <= size)
	{
		perro->name[cont] = name[cont];
		cont++;
	}
	while (cont1 <= size1)
	{
		perro->owner[cont1] = owner[cont1];
		cont1++;
	}
		perro->age = age;

	return (perro);
}
