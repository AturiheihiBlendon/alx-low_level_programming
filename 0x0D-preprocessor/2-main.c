#include <stdio.h>

/**
  * main - prints the name of the file from where it was compiled
  * Return: 0 if success
  */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
