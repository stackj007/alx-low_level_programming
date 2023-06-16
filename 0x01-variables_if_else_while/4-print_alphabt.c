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
char letter;
/* Print lowercase letters */
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
putchar(letters);
}
putchar('\n');
return (0);
}
