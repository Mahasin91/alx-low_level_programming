#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: name
 * @age: age
 * @owner: ownerś name
 * Description: dog struct
*/

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
{
    /* data */
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
