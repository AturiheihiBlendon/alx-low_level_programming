#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: number of arguments passed
 * @argv: An array containing arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int num, i, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (i = 0; argv[num][i]; i++)
		{
			if (argv[num][i] < '0' || argv[num][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
