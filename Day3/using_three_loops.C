#include <stdio.h>

int main() {
    int i;
    for(i = 0; i <= 5; i++){
        printf("%d", i);
    }
    printf("\n");
    i = 0;
    while(i <= 5) {
        printf("%d", i);
        i++;
    }
    i=0;
   do{
       printf("%d",i);
       i++;
   }
   while(i<=5);
   return 0;
}
