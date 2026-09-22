#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: "); 
    scanf("%d", &n);
    (n>0)?printf("positive.\n"):printf("negative.\n");
    return 0;
}