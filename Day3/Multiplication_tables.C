#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= 12; i++) {
        printf("%d ", num * i);
    }

    printf("\n");
    return 0;
}
