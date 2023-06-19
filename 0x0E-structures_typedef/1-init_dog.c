#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure to initialize
 * @name: Pointer to the name string of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner string of the dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
   d->name = name;
   d->age = age;
   d->owner = owner;
}
