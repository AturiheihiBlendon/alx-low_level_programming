#include <stdio.h>

/**
  * main - Prints number of arguments passed
  * @argc: number of arguments passed
  * @argv: array containing arguments passed
  * Return: Always 0 (Success)
  */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", (argc - 1));
	return (0);
}
