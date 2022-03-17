#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Prints alphabet in lowercase, followed by new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
