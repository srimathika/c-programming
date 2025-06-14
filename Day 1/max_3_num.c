#include <stdio.h>

int main()
{
    int a = 10,b = 5,c = 7;
    if(a>b &&a>c)
    {
        printf("A is greater");
    }
    else if(b>a && b>c)
    {
        printf("B is greater");
    }
    else
    {
        printf("c is greater");
    }
    return 0;
    }
