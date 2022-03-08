#include "dog.h"
#include "stdio.h"
/**
 * init_dog - struct
 * @d: dog
 * @name: dog
 * @age : dog
 * @owner: dog
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
