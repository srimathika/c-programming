#include <stdio.h>

int main() {
    int i;

    printf("Even numbers from 1 to 10: ");
    for(i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            printf("%d is even\n",i);
        }
    else{
           printf("%d is odd\n",i);
    }
    }
    return 0;
}
    
