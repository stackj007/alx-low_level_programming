#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: If concatenation fails - NULL.
*         Otherwise - a pointer to the concatenated string.
*/


char *str_concat(char *s1, char *s2)
{
char *concat;
int i, j;

/* Check if NULL was passed */
s1 = s1 == NULL ? "" : s1;
s2 = s2 == NULL ? "" : s2;

/* Allocate memory for concatenated string */
i = j = 0;
while (s1[i])
i++;
while (s2[j])
j++;
concat = malloc(sizeof(char) * (i + j + 1));

/* If memory allocation fails return NULL */
if (concat == NULL)
return (NULL);

/* Copy first string into new memory */
i = 0;
while (s1[i])
{
concat[i] = s1[i];
i++;
}

/* Copy second string into new memory */
j = 0;
while (s2[j])
{
concat[i] = s2[j];
i++, j++;
}

/* Add null terminator to the end of the string */
concat[i] = '\0';

return (concat);
}
