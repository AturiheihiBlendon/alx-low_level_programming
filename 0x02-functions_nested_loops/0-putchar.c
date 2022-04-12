#include "main.h"

/**
 * main - Entry point
 *
 * Return 0 (Success)
 */
int main(void)
{
	char *ch = "_putchar\n";
	
	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	return (0);
}
