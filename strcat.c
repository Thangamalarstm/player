#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[10],c;
printf("Enter 1 string:");
scanf("%s",a);
printf("Enter 2 string:");
scanf("%s",b);
a=strncat(b,a);
printf("reverse of a string is..:%s",c);
return 0;
}
