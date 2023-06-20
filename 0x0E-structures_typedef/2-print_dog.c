#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the information of a dog
 * @d: Pointer to the dog structure
 *
 * Description: This function prints the name, age, and owner of the dog.
 *              If any of the fields are NULL, it prints "(nil)" instead.
 *              If the age is not positive, it prints "(nil)" for the age field.
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        if (d->age > 0.000001) /* Compare with a small positive value */
        {
            printf("Name: %s\nAge: %.6f\nOwner: %s\n",
                   (d->name != NULL) ? d->name : "(nil)",
                   (d->age),
                   (d->owner != NULL) ? d->owner : "(nil)");
        }
        else
        {
            printf("Name: %s\nAge: %s\nOwner: %s\n",
                   (d->name != NULL) ? d->name : "(nil)",
                   "(nil)",
                   (d->owner != NULL) ? d->owner : "(nil)");
        }
    }
}
