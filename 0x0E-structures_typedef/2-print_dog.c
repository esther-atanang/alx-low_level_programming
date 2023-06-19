#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints the information of a dog
 * @d: Pointer to the dog structure
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        if (d->age > 0.0)
        {
            printf("%s\n%.6f\n%s\n", (d->name != NULL) ? d->name : "(nil)", d->age, 
            (d->owner != NULL) ? d->owner : "(nil)");
        }
        else
        {
            printf("%s\n%s\n%s\n", (d->name != NULL) ? d->name : "(nil)", 
            "(nil)", (d->owner != NULL) ? d->owner : "(nil)");
        }
    }
}
