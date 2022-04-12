#include "main.h"
/**
 * print_alphabet_x10 - prints alphabetten times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	while (i = 0; i <=9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}
