#ifndef MY_GUARD_
#define MY_GUARD_
/**
 *  dog_t - struct
 **/
typedef struct dog dog_t;
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

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
