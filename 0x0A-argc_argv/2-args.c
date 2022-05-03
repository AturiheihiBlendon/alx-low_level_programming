#include<stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: number of arguments passed
 * @argv: pointer to a string
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int j;
for (j = 0; j < argc; j++)
printf("%s\n", argv[j]);
return (0);
}
