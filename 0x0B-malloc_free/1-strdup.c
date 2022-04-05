#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy
 * @str: pointer to string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int elem = 0, dup_elem;

	if (!str)
		return (NULL);

	while (*(str + elem))
		elem++;
	elem++;
	ptr = malloc(sizeof(char) * elem);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (dup_elem = 0; dup_elem <= elem; dup_elem++)
	{
		*(ptr + dup_elem) = *(str + dup_elem);
	}
	return (ptr);
}
