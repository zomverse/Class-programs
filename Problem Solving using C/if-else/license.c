#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18){
        if (age<60)
        {
            printf("You are eligible for license.\n");
        }
        else
        {
            printf("You are not eligible for license.\n");
        }
    }
    else
       {
            printf("You are not eligible for license.\n");
       }    
}