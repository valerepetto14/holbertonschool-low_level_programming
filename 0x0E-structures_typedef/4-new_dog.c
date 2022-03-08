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

	dog_t *ptr;
	dog_t dog;

	ptr = &dog;

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
