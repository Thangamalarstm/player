#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
printf("Enter the String..:");
scanf("%s",a);
strcat(a,".");
printf("%s",a);
return 0;
}
