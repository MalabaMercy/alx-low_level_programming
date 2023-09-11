#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog_t - Structure for storing dog information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
typedef struct dog_t {
    char *name;
    float age;
    char *owner;
} dog_t;

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 */
void free_dog(dog_t *d)
{
    if (d != NULL) {
        if (d->name != NULL)
            free(d->name);

        if (d->owner != NULL)
            free(d->owner);

        free(d);
    }
}

int main(void)
{
    dog_t *my_dog = malloc(sizeof(dog_t));

    if (my_dog != NULL) {
        my_dog->name = "Buddy";
        my_dog->age = 3.5;
        my_dog->owner = "Alice";

        free_dog(my_dog);
    } else {
        printf("Failed to allocate memory for the dog.\n");
    }

    return (0);
}
