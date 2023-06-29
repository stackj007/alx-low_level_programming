#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @str: Pointer to the string
*
* Return: Pointer to the modified string
*/
char *cap_string(char *str)
{
int i = 0;

/* Capitalize the first letter */
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}

/* Iterate through each character of the string */
while (str[i] != '\0')
{
/* Check if the character is a separator */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
/* If the next character is a lowercase letter, capitalize it */
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] = str[i + 1] - 32;
}
}

i++;
}

return (str);
}
