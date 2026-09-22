#include <stdio.h>
int main() {
    // Swapping using temp variable
    printf("Enter two numbers: ");
    int a, b, temp;
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: %d %d\n", a, b);
}