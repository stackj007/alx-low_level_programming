#include <main.h>

/**
 * *_strcpy - See description
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}}

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
