#include <stdio.h>

/**
 * main - Entry point
 * author: opiro
 * Return: Always 0 (Success)
 */
int main(void)
{
	char opiro;

	for (opiro = 'a'; opiro <= 'z'; opiro++)
	{
		if (opiro != 'q' && opiro != 'e')
			putchar(opiro);
	}
	putchar('\n');
	return (0);
}
