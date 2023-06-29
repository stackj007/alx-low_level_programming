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
int c, c2;

c = 0;
/* find the size of the array */
while (dest[c])
c++;

/* iterate throw each src array value without without the null byte*/
for (c2 = 0; src[c]; c2++)
/* append src[c2] to dest[c] while overwriting the null byte in dest*/
dest[c++] = src[c2];
return (dest);
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
