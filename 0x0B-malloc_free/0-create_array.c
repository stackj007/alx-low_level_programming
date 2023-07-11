#include "main.h"
#include <stdlib.h>

/**
*create_array - Creates an array of chars
*@size: The size of the array.
*@c: The char to initialize the array with.
*
*Return: If size = 0 or the function fails - NULL.
*         Otherwise - a pointer to the array.
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

/* If size is 0, return NULL */
if (size == 0)
{
return (NULL);
}

/* Allocate memory for the array */
array = malloc(size * sizeof(char));

/* If memory allocation failed, return NULL */
if (array == (NULL))
{
return (NULL);
}

/* Initialize array with char c */
for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}
