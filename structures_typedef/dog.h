#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog, type char *
 * @age: The age of the dog, type float
 * @owner: The owner of the dog, type char *
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};
/* Prototype for the init_dog function */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif