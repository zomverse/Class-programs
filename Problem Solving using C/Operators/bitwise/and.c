#include <stdio.h>
int main() {
    int a = 5;
    int b = 3;
    int c = a & b; // Bitwise and operation
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);
    printf("After bitwise AND: %d\n", c);
    return 0;
}