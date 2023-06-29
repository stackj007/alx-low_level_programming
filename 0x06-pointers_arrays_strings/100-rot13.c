#include "main.h"

/**
* rot13 - Encodes a string using ROT13.
* @str: Pointer to the string
*
* Return: Pointer to the modified string
*/
char *rot13(char *str)
{
int i, j;
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13_alphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

i = 0;
while (str[i] != '\0')
{
j = 0;
while (alphabet[j] != '\0')
{
if (str[i] == alphabet[j])
{
str[i] = rot13_alphabet[j];
break;
}
j++;
}
i++;
}

return (str);
}
