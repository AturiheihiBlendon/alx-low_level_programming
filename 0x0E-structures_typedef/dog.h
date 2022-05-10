#ifndef DOG_H
#define DOG_H

/**
  * struct dog - my dog
  *@name: name of my dog
  *@owner: owner of my dog
  *@age: age of my dog
  */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
