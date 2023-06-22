#include "main.h"

/**
* more_numbers - Prints the numbers 0 - 14 ten times.
*/
void more_numbers(void)
{
int num, row, count;

for (row = 1; row <= 10; row++)
{
for (count = 0; count <= 14; count++)
{
num = count;
if (count > 9)
{
_putchar((count / 10) + '0');
num = count % 10;
}
_putchar(num + '0');
}
_putchar('\n');
}
}
