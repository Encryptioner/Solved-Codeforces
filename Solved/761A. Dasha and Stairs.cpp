#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,x;
    cin>>a>>b;
    if(a==0 && b==0)
    {
        cout<<"NO\n";
    }
    else
    {

    x=abs(a-b);
    if(x==0 || x==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    }
    return 0;
}

