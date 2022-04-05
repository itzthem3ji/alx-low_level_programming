#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size
 * @c: constant
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	return (NULL);
	ptr = malloc((size) * sizeof(char));
	if (ptr == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
return (ptr);
}
