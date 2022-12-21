#include <stdio.h>

int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 98;
    p = a;
    printf("a[2] = %d\n", *(p + 2));

    return 0;
}

