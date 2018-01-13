#include<bits/stdc++.h>
using namespace std;

int flag[9];
int main()
{
    string str;

    cin>>str;

    int len,i,j,B=0,u=0,l=0,b=0,a=0,s=0,r=0,x,d,count=0;
    len=str.length();


    for(i=0;i<len;i++)
    {
        if(str[i]=='B')
        {
            B++;
        }
        if(str[i]=='u')
        {
            u++;
        }
        if(str[i]=='l')
        {
            l++;
        }
        if(str[i]=='b')
        {
            b++;
        }
        if(str[i]=='a')
        {
            a++;
        }
        if(str[i]=='s')
        {
            s++;
        }
        if(str[i]=='r')
        {
            r++;
        }
        if(B>=1 && l>=1 && b>=1 && s>=1 && r>=1 && a>=2 && u>=2)
        {
            count++;
            B-=1,l-=1,b-=1,s-=1,r-=1,a-=2,u-=2;
        }
    }
    printf("%d\n",count);
    return 0;
}
