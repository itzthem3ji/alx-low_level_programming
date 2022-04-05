#include "main.h"
#include <stdlib.h>
/**
 * @brief Creates an array of chars
 * 
 * @param size: size of block 
 * @param c: specific char 
 * @return ptr: pointer to array 
 */

char *create_array(unsigned int size, char c)
{
    char *ptr;
    unsigned int i;

    if (size == 0)
        return NULL;
    ptr = malloc((size) * sizeof(char));
    if (ptr == NULL)
        return NULL;
    for (i = 0; i < size; i++)
    {
        *(ptr + i) = c;
    }
    
return (ptr);
}
