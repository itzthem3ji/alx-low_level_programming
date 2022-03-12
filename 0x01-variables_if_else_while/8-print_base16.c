#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphb;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (alphb = 'a'; alphb <= 'f'; alphb++)
		putchar(alphb);
	putchar('\n');

	return (0);
}
