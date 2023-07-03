#include "main.h"

/**
*_strchr - locates a character in a string
*@s: the string to be searched
*@c: the character to be located
*
*Description: this function takes a pointer to a string (s),
* and a character (c)
* it iterates over the string untill it finds the character .
* if a character is found, a pointer to the character in  the string
* is returned. if the character is not fund, Null is returned.
*
*Return: if c is found in the string s, a pointer to the firsto ccurrence of c.
*if c is not found, Null
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

if (c == '\n')
{
return (s);
}
return (NULL);
}
