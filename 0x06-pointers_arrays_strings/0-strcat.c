#include "main.h"
/**
* _strcat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string to be appended.
*
* Return: A pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int src_len = 0;

/* Find the length of dest */
while (dest[dest_len] != '\0')
dest_len++;

/* Find the length of src */
while (src[src_len] != '\0')
src_len++;

/* Append characters from src to dest */
for (int i = 0; i < src_len; i++)
dest[dest_len++] = src[i];

/* Add the terminating null byte */
dest[dest_len] = '\0';

return (dest);
}
