#include<stdio.h>
#include<string.h>
int main() 
{
int a,i,fact=1;
printf("Enter a number:");
scanf("%d",&a);
for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
printf("The factorial of %d is %d",a,fact);
return 0;
}
