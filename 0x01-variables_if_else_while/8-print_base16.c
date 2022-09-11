#include <stdio.h>

/**
 * main - Entry point
 * autor: opiro
 * Return: Always 0 (Success)
 */
int main(void)
{
	int opiro;
	char murewa;

	for (opiro = 48; opiro < 58; opiro++)
		putchar(opiro);
	for (murewa = 'a'; murewa <= 'f'; murewa++)
		putchar(murewa);
	putchar('\n');
	return (0);
}
