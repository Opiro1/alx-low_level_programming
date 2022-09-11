#include <stdio.h>

/**
 * main - Entry point
 * author: opiro
 * Return: Always 0 (Success)
 */
int main(void)
{
	char opiro;

	for (opiro = 'z'; opiro >= 'a'; opiro--)
		putchar(opiro);
	putchar('\n');
	return (0);
}
