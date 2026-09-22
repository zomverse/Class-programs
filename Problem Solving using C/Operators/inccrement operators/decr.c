#include <stdio.h>
int main() {
    int a = 5;
    int x = a--; // Post-decrement: x gets the value of a before decrementing
    int y = --a; // Pre-decrement: a is decremented first, then y gets the new value of a
    printf("Value of x (post-decrement): %d\n", x); // Output 5
    printf("Value of y (pre-decrement): %d\n", y); // Output 3
    printf("value of a:%d",a);// Output 3
    return 0;
}