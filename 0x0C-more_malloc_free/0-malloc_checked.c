#include "main.h"
#include <stdlib.h>

/*
 * malloc_checked - allocates memory using malloc based on passed value
 * @b: size
 * Return: exit with status code 98
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
