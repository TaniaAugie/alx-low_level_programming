#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int i, j, k, l;

	i = 0;
	while (i < 1000)
	{
		j = i / 100; /* hundreds */
		k = (i / 10) % 10; /* tens */
		l = i % 10; /* units */
		if (j < k && k < l)
		{
			putchar(l + '0');
			putchar(k + '0');
			putchar(j + '0');
			if (i < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar ('\n');

	return (0);
}
