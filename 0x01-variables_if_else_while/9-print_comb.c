#include <stdio.h>

/**
 * main - Entry point
 * author:opiro
 * Return: Always 0 (Success)
 */
int main(void)
{
	int opiro;

	for (opiro = 48; opiro < 58; opiro++)
	{
		putchar(opiro);
		if (opiro != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
