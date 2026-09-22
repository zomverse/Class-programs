
//Program for the sum of individual digits
#include <stdio.h>
int main() {
    int n,sum;
    printf("Enter a 3 digit number:\n");
    scanf("%d", &n); //n = 357 
    sum = n % 10;// sum = 357 % 10 = 7
    n = n / 10; // n = 357 / 10 = 35
    sum = sum + n % 10; // sum = 7 + 35 % 10 = 7 + 5 = 12
    n = n / 10; // n = 35 / 10 = 3
    sum = sum + n % 10; // sum = 12 + 3 % 10 = 12 + 3 = 15
    printf("The sum of individual digits is %d\n", sum);
    

}