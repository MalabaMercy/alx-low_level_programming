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

int main()
{
    struct(dog_t my_dog;

    my_dog.name = "Chiraa";
    my_dog.age = 2.5;
    my_dog.owner = "Mercy";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
