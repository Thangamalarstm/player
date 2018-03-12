#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int a,i;
printf("Enter the characters..:");
scanf("%s",s);
a=strlen(s);
for(i=0;i<a;i++)
{
if(i==0)
{
s[i]=toupper(s[i]);
printf("%c",s[i]);
}
else
{
printf("%c",s[i]);
}
}
return 0;
}
