#include "dog.h"
#include <stdlib.h>
#include "main.h"
/**
 * new_dog - creates a new dog
 * @name: pointer to the name of the dog
 * @ge: age of the dog in float
 * @owner: pointer to the name of thr owner
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
        return (NULL);
    }
    return (dog);
}
