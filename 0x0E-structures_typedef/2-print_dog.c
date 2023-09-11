#include <stdio.h>
#include <stdlib.h>

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
 * print_dog - Prints information about a struct dog
 * @d: A pointer to a struct dog
 */
void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
        printf("Age: %.6f\n", d->age);
        printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
    }
}

int main()
{
    struct dog my_dog;
    my_dog.name = "Chiraa";
    my_dog.age = 2.5;
    my_dog.owner = "Mercy";
    print_dog(&my_dog);

    return 0;
}
