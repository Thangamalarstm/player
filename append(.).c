#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
gets(a);
strcat(a,".");
printf("%s",a);
return 0;
}
