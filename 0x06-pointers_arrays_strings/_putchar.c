#include <unistd.h>

/**
*_putchar - wites the charecter c to stdout
*@c: the charecter to print
*
*Return: On success 1.
*On error: -1 is returned, and error is set appropeiately.
* */

int _putchar(char c)
{
return (write(1, &c, 1));
}
