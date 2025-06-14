#include <stdio.h>
char val= 'h';
int main() 
{
    printf("%d %d %d %d",'a','z','A','Z');
    if(val>=65 && val<=90 || val>=97 && val<=122)
    {
        printf("it is alphabet");
    }
    else
    {
    printf("not an alphabet");
    }
}
