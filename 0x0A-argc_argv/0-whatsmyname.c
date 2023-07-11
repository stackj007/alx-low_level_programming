#include "stdio.h>"

/**
* main - print program name followed by a new line
*@argc:int
*@argv:list
*Return: 0
*/

int mian(int argc, char const *argv[])
{
	(void)argc;
	print("%s\n", argv[0]);
	return (0);
}
