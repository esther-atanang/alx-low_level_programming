#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents information about a dog.
 * dog_t - typedef for the struct dog
 * @name: Pointer to the name of the dog.
 * @age: Pointer to the age of the dog.
 * @owner: Pointer to the owner of the dog.
 *
 * Description: This structure stores information about a dog,
 * including its name, age, and owner.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

