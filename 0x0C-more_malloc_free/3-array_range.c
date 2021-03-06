#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *p;
	int count, i;

	if (min > max)
		return (NULL);
	count = (max - min) + 1;
	p = malloc(sizeof(int) * count);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < count; i++, min++)
		p[i] = min;
	return (p);
}
