#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrCpy, *newLoc;
	unsigned int i;

	if (ptr != NULL)
	ptrCpy = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	newLoc = malloc(new_size);
	if (newLoc == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(newLoc + i) = ptrCpy[i];
	}
	free(ptr);
return (newLoc);
}