#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * new_dog - creates new dog
  *@name: name of new dog
  *@age: age of new dog
  *@owner: owner of new dog
  *Return: NULL for function fail
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(struct dog));

	if (my_dog == NULL)
	{
		return (NULL);
	}
	else
	{
		my_dog->name = name;
		my_dog->age = age;
		my_dog->owner = owner;
		return (my_dog);
	}
}
