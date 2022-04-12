#include "main.h"
/**
 * print_alphabet_x10 - prints alphabetten times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i <=10)
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
	}
	_putchar('\n');
}
