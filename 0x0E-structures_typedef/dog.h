#ifndef MY_GUARD_
#define MY_GUARD_
typedef struct dog dog_t;

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
