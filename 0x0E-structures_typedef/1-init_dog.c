#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: address of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
	    d->name = name;
	    d->age = age;
	    d->owner = owner;
    }	
}
