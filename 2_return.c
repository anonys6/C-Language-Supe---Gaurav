#include <stdio.h>

int add(int a, int b)
{
    int c = a + b;

    // printf("%d", c);

    return c;
}

int main()
{
    printf("%d", add(5, 4));

    // add(5, 4);

    return 0;
}