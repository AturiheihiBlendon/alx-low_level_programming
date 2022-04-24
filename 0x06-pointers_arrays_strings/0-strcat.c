#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < dest_len; i++)
	{
		dest[dest_len + 1] = src[i];
		dest[dest_len] = '\0';
		return (dest);
	}
}
