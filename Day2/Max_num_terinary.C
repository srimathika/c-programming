#include <stdio.h>

int main()
{
  int a,b,c,max;
  printf("enter the number");
  scanf("%d %d %d", &a,&b,&c);
   max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
  printf("greatest number is: %d\n",max);
  
  
}
