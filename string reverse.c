#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
printf("Enter a string:");
scanf("%s",a);
printf("reverse of a string is..:%s",strrev(a));
return 0;
}
