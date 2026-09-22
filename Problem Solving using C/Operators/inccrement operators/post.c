#include <stdio.h>
int main() {
    int a = 5;
    int x = a++; // Post-increment: x gets the value of a before incrementing
    int y = ++a; // Pre-increment: a is incremented first, then y gets the new value of a
    printf("Value of x (post-increment): %d\n", x); // Outputs 5
    printf("Value of y (pre-increment): %d\n", y); // Outputs 7
    return 0;
}