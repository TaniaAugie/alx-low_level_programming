#include <stdio.h>
/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always (Success)
 */
int main(void)
{
	int i, z = 0;

	while (1 < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
