#include <stdio.h>
/**
*main -Entry point of the program
*
*Description: print the alphabet
*
*Return: Always 0 (Success)
*/
int main(void)
{
char lowercase;
char uppercase;
/*print lowercase letters*/
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
putchar(lowercase);
/*print uppercase letters*/
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
putchar(uppercase)
putchar('\n')
return (0);
}
