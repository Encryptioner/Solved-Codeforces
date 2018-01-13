#include<bits/stdc++.h>

using namespace std;

int main()
{
    string v1,v2,nv1,nv2,p1,p2;
    int t,n,c=0,i,j;

    cin>>v1>>v2;
    cout<<v1<<" "<<v2<<"\n";

    scanf("%d",&n);
    cin>>nv1>>nv2;

    p2=nv2;

    if(nv1==v1)
    {
        p1=v2;
    }
    else
    {
        p1=v1;
    }
    cout<<p1<<" "<<p2<<"\n";

    for(i=0;i<n-1;i++)
    {
        cin>>nv1>>nv2;

        if(nv1==p1)
        {
            p1=p2;
        }
        p2=nv2;
        cout<<p1<<" "<<p2<<"\n";
    }
    return 0;
}
