#include <stdio.h>

int main()
{
    // int a = 23, b = 56;

    // printf("%d", 23 ^ 56);
   
    printf("%d", 23 ^ 12);
}

//    1 0 1 1 1 - 23
//    0 1 1 0 0 - 12
// &  0 0 1 0 0 - 4
// |  1 1 1 1 1 - 31
//  ^ 1 1 0 1 1 - 27