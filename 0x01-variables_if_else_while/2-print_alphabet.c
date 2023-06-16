#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:prints the alphabet in lowercase, followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letters;
/* Print lowercase letters */
for (letters = 'a'; letters <= 'z'; letters++)
putchar(letters);
putchar('\n');
return (0);
}
