#include <stdio.h>

int main()
{
   int day;
   printf("Enter the number");
   scanf("%d" , & day);
   if(day==1)
   {
       printf("SUNDAY");
   }
   else if(day==2)
   {
       printf("MONDAY");
   }
   
    else if(day==3)
    {
        printf("TUESDAY");
    }
    else if(day==4)
    {
        printf("WEDNESDAY");
    }
   
    else
    {
        printf("invalid day");
    }
}
  
