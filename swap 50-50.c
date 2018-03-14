#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
int a,i,t;
printf("Enter the string..:");
scanf("%s",s);
a=strlen(s);

if(a%2==0)
{
for(i=0;i<a;i=i+2)
{
  t= s[i];
  s[i]=s[i+1];
  s[i+1]=t;
}
printf("%s",s);

}
else
{
for(i=0;i<a-1;i=i+2)
{
  t= s[i];
  s[i]=s[i+1];
  s[i+1]=t;
}
printf("%s",s);


}
return 0;
}
