#include <stdio.h>
int main() {
    // Type conversion example
    int a = 10;
    float b = 3.5;
    
    // Implicit type conversion
    float result1 = a + b; // 'a' is converted to float
    printf("Result of a + b: %f\n", result1);
    
    // Explicit type conversion (casting)
    int result2 = (int)b; // 'b' is explicitly cast to int
    printf("Result of casting b to int: %d\n", result2);
    
    return 0;
}