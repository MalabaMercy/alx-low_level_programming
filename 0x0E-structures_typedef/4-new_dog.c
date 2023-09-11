#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
 * new_dog - Creates a new dog with given name, age, and owner.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog_t struct.
 *         Returns NULL if memory allocation fails or if any input is NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    if (name == NULL || owner == NULL)
        return (NULL);

    dog_t *new_dog_ptr = malloc(sizeof(dog_t));
    if (new_dog_ptr == NULL)
        return (NULL);

    new_dog_ptr->name = strdup(name);
    if (new_dog_ptr->name == NULL) {
        free(new_dog_ptr);
        return (NULL);
    }

    new_dog_ptr->age = age;

    new_dog_ptr->owner = strdup(owner);
    if (new_dog_ptr->owner == NULL) {
        free(new_dog_ptr->name);
        free(new_dog_ptr);
        return (NULL);
    }

    return (new_dog_ptr);
}

int main(void)
{
    dog_t *my_dog = new_dog("Buddy", 3.5, "Alice");

    if (my_dog != NULL) {
        printf("Name: %s\n", my_dog->name);
        printf("Age: %.2f\n", my_dog->age);
        printf("Owner: %s\n", my_dog->owner);
        free(my_dog->name);
        free(my_dog->owner);
        free(my_dog);
    } else {
        printf("Failed to create a new dog.\n");
    }

    return (0);
}
