#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a Character");
    scanf("%c", &ch);  
    if(ch>='A' && ch>='Z' || ch>='a' && ch<='z')
    {
        printf("this is an alpahbet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("this is numeric");
    }
    else
    {
        printf("this is specail character");
    }
    }


