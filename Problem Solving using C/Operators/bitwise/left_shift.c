#include <stdio.h>
int main() {
    int a = 5;
    int b = a<<1;
     printf("First number: %d\n", a);
     printf("After bitwise left shift: %d\n", b);
     int c = a << 2; // Bitwise left shift operation
    printf("First number: %d\n", a);
    printf("After bitwise left shift: %d\n", c);
    return 0;
}