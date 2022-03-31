#include "main.h"

/**
 * for_strlen - obtains string length
 * @a: string
 * @l: integer to count length
 *
 * Return: On success 1.
 * On error, return -1, and errno is set appropriately.
 */
int for_strlen(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (for_strlen(a + 1, l + 1));
}
/**
 * comp_str - compares string vs string reverse
 * @a: string
 * @l: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int comp_str(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (comp_str(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int l = for_strlen(s, 0);

	return (comp_str(s, l));
}
