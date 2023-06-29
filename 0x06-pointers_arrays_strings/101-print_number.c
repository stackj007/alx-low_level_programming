#include <stdio.h>
#include "main.h"

int main(void)
{
    char str[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.";

    printf("Before ROT13: %s\n", str);
    rot13(str);
    printf("After ROT13: %s\n", str);

    return (0);
}

