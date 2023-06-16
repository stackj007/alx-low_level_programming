#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: Print single-digit numbers of base 10 using a for loop
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
putchar('0' + i);
putchar('\n');
return (0);
}
