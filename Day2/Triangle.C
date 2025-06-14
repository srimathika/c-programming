#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter the three sides");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==a)
	{
	    printf("it is equilateral traingle");
	}
    else if (a + b > c && a + c > b && b + c > a)
    printf("the three sides form traingle");
    else
    {
        printf("the sides don not form a traingle");
    }
}
