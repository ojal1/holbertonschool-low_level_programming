#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - struct of a dog.
 *
 * @name: name element char pointer for dog.
 * @age: age element float for dog.
 * @owner: owner element char pointer for dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
