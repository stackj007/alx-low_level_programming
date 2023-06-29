#include "mian.h"

/**
*_strncat - a function that concatinate two strings.
*@dest: pointer: to destination input
*@src: pointer to source input
*@n: most number of bytes from 8src
*
*Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	/* find the size of dest array */
	while (dest[c])
		c++;
	/**
	 *src does not need to be null
	 *if it contains 0 or more bbytes
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/* null terminate dest */
	dest[c + i] = '\0';

	return (dest);
}
