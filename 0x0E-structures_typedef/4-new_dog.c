#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: pointer to the name of the dog
 * @age: age of the dog in float
 * @owner: pointer to the name of thr owner
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(dog_t));
if (dog != NULL)
{
dog->name = name;
dog->age = age;
dog->owner = owner;
}
else
{
free(dog);
return (NULL);
}
return (dog);
}
