#include <stdio.h>
int main() {
    int n,reverse ;
    printf("Enter a 3 digit number:\n");
    scanf("%d", &n);
    reverse = (n % 10)*100 + ((n / 10) % 10)*10 + (n / 100); 
    printf("The reverse of the number is %d\n", reverse);
    return 0;
}