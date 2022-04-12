#include "main.h"

/**
 * main -Check the code
 *
 * print_alphabet - prints lower case alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
