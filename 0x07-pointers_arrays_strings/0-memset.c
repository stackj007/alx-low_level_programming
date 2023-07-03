#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: pointer to the memory area
* @b: constant byte
* @n: number of bytes of the memory area to be filled
*
* Description: This function takes a pointer ,constant byte,
* and a number. It fills the first 'n' bytes of the memory area
* pointed to by 's' with
* the constant byte 'b'. Then, it returns a pointer to the memory area 's'.
*
* Return: pointer to the memory area 's'
*/


char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{
	s[i] = b;

}

return (s);
}
