#include <stdio.h>
int main() {
   int i=1;
   if(i++ && (i==1)){
       printf("Condition is true");
   } else {
       printf("Condition is false");
   }
}