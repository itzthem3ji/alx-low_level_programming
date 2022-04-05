#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - Concat 2 strings.
* @s1: string
* @s2: string
* Return: char
*/

char *str_concat(char *s1, char *s2)
{
    char *conc, *tmp;

    if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	conc = malloc(strlen(s1) + strlen(s2) + 1);
	if (!conc)
		return (0);

	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;

	while ((*tmp++ = *s2++));

	return (conc);
}
