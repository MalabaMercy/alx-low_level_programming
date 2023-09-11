#include <stdio.h>

/**
 * struct dog - Represents information about a dog
 * @name: The name of the dog (a string)
 * @age: The age of the dog (a floating-point number)
 * @owner: The owner of the dog (a string)
 *
 * Description: This struct stores information about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * init_dog - Initializes a struct dog with provided information
 * @d: A pointer to a struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}

int main()
{
    struct dog my_dog;

    init_dog(&my_dog, "chiraa", 2.5, "Mercy");

    printf(("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

    return 0;
}
