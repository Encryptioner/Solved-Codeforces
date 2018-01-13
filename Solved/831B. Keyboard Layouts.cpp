#include<bits/stdc++.h>

using namespace std;

int main()

{
    string a,b,s;
    int i,j,x,y,z,n;
    char small[26],cap[26];

    cin>>a>>b>>s;

    n=s.length();

    for(i=0;i<26;i++)
    {
        x=a[i]-97;
        small[x]=b[i];
        cap[x]=b[i]-32;
        //cout<<a[i]<<" "<<b[i]<<" "<<small[x]<<" "<<cap[x]<<" "<<x<<endl;
    }
    for(i=0;i<n;i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            x=s[i]-97;
            cout<<small[x];
        }
        else if(s[i]>=65 && s[i]<=190)
        {
            x=s[i]-65;
            cout<<cap[x];
        }
        else
        {
            cout<<s[i];
        }
    }
    printf("\n");
    return 0;
}
