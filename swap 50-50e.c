#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
int a,b,i,t1,t2;
printf("Enter the string..:");
scanf("%s",s);
a=strlen(s);
b=a/2;
for(i=0;i<b;i++)
{
  t1= s[i];
  s[i]=s[i+1];
  s[i+1]=t1;
printf("%s",s);
break;
}
for(i=b;i<a;i++)
{
  t2= s[i];
  s[i]=s[i+1];
  s[i+1]=t2;
printf("%s",s);
break;
} return 0;
}
