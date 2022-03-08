#ifndef DOG_H
#define DOG_H
/**
*struct dog - struc
*@name: name
*@age: age
*@owner: dueño
**/
struct dog
{
char * name;
float age;
char * owner;
};

/**
*dog_t - struct  
**/
typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
