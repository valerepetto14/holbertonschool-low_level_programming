#include "dog.h"
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

	perro = malloc(sizeof(struct dog_t));

	if (perro == NULL)
		return (NULL);

	perro->name = malloc(sizeof(char) * size);
	perro->owner = malloc(sizeof(char) * size1);

	if (perro->name == NULL)
		return (NULL);
	if (perro->owner == NULL)
		return (NULL);

	while (cont <= size)
		perro[cont] = name[cont];
	while (cont1 <= size1)
		perro[cont1] = name[size1];
	perro->age = age;

	return (perro);
}
