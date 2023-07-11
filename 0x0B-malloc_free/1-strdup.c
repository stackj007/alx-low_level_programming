#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
*_strdup - Returns a pointer to a newly allocated space in memory,
*          which contains a copy of the string given as a parameter.
*@str: The string to be duplicated.
*
*Return: If str = NULL or insufficient memory is available - NULL.
*        Otherwise - a pointer to the duplicated string.
*/


char *_strdup(char *str)
{
char *duplicate_str;
int i = 0, len = 0;

/* If str is NULL return NULL */
if (str == NULL)
{
return (NULL);
}

/* Get the length of the string */
while (str[len])
{
len++;
}

/* Allocate memory for the duplicate string */
duplicate_str = malloc(sizeof(char) * (len + 1));

/* If memory allocation failed, return NULL */
if (duplicate_str == NULL)
{
return (NULL);
}

/* Copy the string */
while (str[i])
{
duplicate_str[i] = str[i];
i++;
}

/* Don't forget to add the null terminator for the string */
duplicate_str[i] = '\0';

return (duplicate_str);
}
