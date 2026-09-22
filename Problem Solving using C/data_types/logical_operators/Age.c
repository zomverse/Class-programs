#include <stdio.h>
//Age Eligibility
int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Age is between 18 and 60: %d\n", age >= 18 && age <= 60);
    printf("Age is below 18: %d\n", age < 18);
    printf("Age is above 60: %d\n", age > 60);

    return 0;
}