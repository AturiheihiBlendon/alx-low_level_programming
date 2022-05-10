#include "dog.h"
/**
  * init_dog - initilazes a variable d of struct dog
  *@d: variable of struct dog
  *@name: name of my variable
  *@owner: owner of my variable
  *@age: age of my variable
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
