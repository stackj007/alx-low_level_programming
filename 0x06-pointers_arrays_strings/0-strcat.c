#include <stdio.h>

/**
* _strcat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string to be appended.
*
* Return: A pointer to the resulting string dest.
*/
char *_strcat(char *dest, const char *src)
{
char *dest_start = dest; /* Store the starting address of dest */

/* Move dest pointer to the end of the string */
while (*dest != '\0')
{
dest++;
}

/* Append characters from src to dest */
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0'; /* Add the terminating null byte */

return (dest_start); /* Return the starting address of dest */
}

/**
* main - Entry point of the program.
*
* Return: Always 0.
*/
int main(void)
{
char dest[100] = "Hello, ";
char src[] = "world!";

printf("Before concatenation: %s\n", dest);

/* Concatenate the strings */
_strcat(dest, src);

printf("After concatenation: %s\n", dest);

return (0);
}
