#include <bits/stdc++.h>//Acceped on 3rd attempt

#define ios std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define Int long long int

using namespace std;

int main()
{
    ios;
    Int n,x,a,i,j,val=0;

    cin>>n>>x;

    for(i=0;i<n;i++)
    {
        cin>>a;
        val+=a+1;
    }
    val-=1;
    //cout<<val<<endl;
    if(val==x)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
