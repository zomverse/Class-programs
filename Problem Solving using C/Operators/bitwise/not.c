#include <stdio.h>
int main() {
    int a = 5;
    int b = ~a; // Bitwise NOT operation
    printf("Original number: %d\n", a);
    printf("After bitwise NOT: %d\n", b);
    return 0;
}//~x =-(x+1)