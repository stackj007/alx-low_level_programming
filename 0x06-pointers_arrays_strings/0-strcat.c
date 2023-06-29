#include <main.h>

/**
* *_strcpy - See description
* @dest: char type string
* @src: char type string
* Description: Copy the string pointed to by pointer `src` to
* the buffer pointed to by `dest`
* Return: Pointer to `dest`
*/

char *_strcat(char *dest, char *src)
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
