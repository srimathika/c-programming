#include <stdio.h>

int main() 
{
    int age = 10;
    char gender='m';
    
    if(age<18 || gender == 'M')
    {
        printf("the ticket is free");
    }
    else if(age<10 || gender =='F')
    {
        printf("the ticket is also charged");
    }
    else
    {
        printf("the ticket is charged");
    }
     return 0;
}
