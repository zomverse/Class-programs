#include <stdio.h>
int main() {
    int n,reverse;
    printf("Enter a 3 digit number:\n");
    scanf("%d", &n);
    reverse = n % 10; // reverse = 357 % 10 = 7
    n = n / 10; // n = 357 / 10 = 35
    reverse = reverse * 10 + n % 10; // reverse = 7 * 10 + 35 % 10 = 70 + 5 = 75
    n = n / 10; // n = 35 / 10 = 3
    reverse = reverse * 10 + n % 10; // reverse = 75 * 10 + 3 % 10 = 750 + 3 = 753
    printf("The reverse of the number is %d\n", reverse);

}