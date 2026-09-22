#include <stdio.h>
int main() {
    int a = 100;
    int b = a>>1;
     printf("First number: %d\n", a);
     printf("After bitwise right shift: %d\n", b);
     int c = a >> 2; // Bitwise right shift operation
    printf("First number: %d\n", a);
    printf("After bitwise right shift: %d\n", c);
    return 0;
}