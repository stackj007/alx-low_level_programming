#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:prints the alphabet in lowercase (excluding 'q' and 'e')
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letters;
/* Print lowercase letters */
for (letters = 'a'; letters <= 'z'; letters++)
{
if (letter != 'q' && letter != 'e')
putchar(letters);
}
putchar('\n');
return (0);
}
