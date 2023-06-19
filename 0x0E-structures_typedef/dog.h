#ifndef DOG
#define DOG
/**
 * struct dog - Represents information about a dog.
 * @name: Pointer to the name of the dog.
 * @age: Pointer to the age of the dog.
 * @owner: Pointer to the owner of the dog.
 *
 * Description: This structure stores information about a dog,
 * including its name, age, and owner.
 */
typedef struct dog{
    char *name;
    float age;
    char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

