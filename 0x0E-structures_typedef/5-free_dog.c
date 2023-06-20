#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the stuctures
 * @d: The structure
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);  // Free the allocated memory for the name string
        free(d->owner); // Free the allocated memory for the owner string
        free(d);        // Free the allocated memory for the dog structure
    }
}
