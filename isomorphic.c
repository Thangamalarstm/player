#include<stdio.h>
#include<string.h>
int main()
{
char s1[30],s2[30];
int a,b,c,d,e,f,g,h,cnt=0,i,j;
printf("Enter the 2 strings..:");
scanf("%s%s",s1,s2);
a=strlen(s1);
b=strlen(s2);
if(a==b)
{
for(i=0;i<a;i++)
{
for(j=i+1;j<a;j++)
{
c=s1[i];
d=s1[j];
e=s2[i];
f=s2[j];
g=c-d;
h=e-f;
if(g==h)
{
cnt=1;
}
else
{
cnt=0;
break;
}
}
}
}
else
{
printf("NO");
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

