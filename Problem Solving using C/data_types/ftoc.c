#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius =  5/9*fahrenheit - 32;
    printf("Temperature in Celsius: %f", celsius);
    return 0;
}