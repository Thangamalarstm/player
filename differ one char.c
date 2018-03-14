#include<stdio.h>
#include<string.h>
int main()
{
char s1[30],s2[30];
int a,b,cnt=0,i,j;
printf("Enter the 2 strings..:");
scanf("%s%s",s1,s2);
a=strlen(s1);
b=strlen(s2);
if(a==b)
{
for(i=0;i<a;i++)
{
    if(s1[i]!=s2[i])
{
    cnt=cnt+1;
}
}
}
if(cnt==1)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
