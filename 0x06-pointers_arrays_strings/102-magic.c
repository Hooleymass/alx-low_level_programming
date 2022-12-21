#include "main.h"
#include <stdio.h>

/**
 * 102-magic.c - program that prints a[2] = 98, followed by a new line
 *
 * Author: Hooley Mass
 * Last modified: Jan 21, 2022
 */
int main(void)
{
    int n = 0;
    int a[5] = {0};
    int *p;

    a[2] = 98;
    p = a;
    printf("a[2] = %d\n", a[2]);
    return (0);
}

