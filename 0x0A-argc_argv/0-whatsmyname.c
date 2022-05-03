#include <stdio.h>

/**
  * main - prints the program name
  * @argc: number of commands passed
  * @argv: pointer to a string
  * Return: Alwyas 0 (success)
  */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
