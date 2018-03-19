#include<iostream>
using namespace std;
int main()
{
    char s[30];
    int i;
    cout<<"enter name:";
    for(i=0;i<5;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<5;i++)
    {
        s[i]=s[i]+3;
        cout<<s[i];
    }return 0;
}
