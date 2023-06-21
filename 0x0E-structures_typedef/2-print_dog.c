#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Prints the information of a dog
 * @d: Pointer to the dog structure
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
"0.000000",
(d->owner != NULL) ? d->owner : "(nil)");
}
}
else
{
return;
}
}
