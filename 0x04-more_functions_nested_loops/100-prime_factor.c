#include <stdio.h>
/**
* main - Print largest prime factor of a number
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long int n, pf;

	n = 612852475143;

	for (pf = 2; n > 1; pf++)
	{
		while (n % pf == 0)
		{
			n = n / pf;
			if (n == 1)
			{
				printf("%d", pf);
			}
		}
	}
	return (0);
}
