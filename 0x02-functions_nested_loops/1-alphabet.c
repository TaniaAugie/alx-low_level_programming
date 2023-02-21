#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase followed by a new line
 * Return: Always 0
 */
void print_alphabet(void);
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
