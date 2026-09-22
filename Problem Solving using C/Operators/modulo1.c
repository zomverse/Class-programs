#include <stdio.h>
int main(){
    int n;
    printf("Enter 3 digit number:\n");
    scanf("%d", &n);
    int k = n % 10;
    printf("The remainder when %d is divided by 10 is %d\n", n, k);
    return 0;
}