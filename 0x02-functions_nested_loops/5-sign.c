#include "main.h"

/**
 * print_sign - checks for a number and prints its sighn
 *
 * @n: number to be checked
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(n);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n);
		return (0);
	}
	else (n < 0)
	{
		_putchar(n);
		return(-1);
	}
}
