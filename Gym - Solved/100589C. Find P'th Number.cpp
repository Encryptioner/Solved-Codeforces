#include<bits/stdc++.h>//Accepted
using namespace std;

int main()
{
    int t,n,x,I,K;
    string s;

    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        cin>>x;

        if(s=="odd")
        {
            cout<<x*2<<"\n";
        }
        else
        {
            cout<<((x*2)-1)<<"\n";
        }
    }
    return 0;
}
