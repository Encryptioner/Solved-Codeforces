#include<bits/stdc++.h>

using namespace std;

struct shop
{
	int p1,p2,d;
	bool operator < ( const shop& c ) const
	{
		//if(d!=c.d)//to store comparatively minimum number 1st
        {
		return d < c.d;//shorting increasingly
        }
	}
};
vector<shop>data;
int a[200009],b[200009];

int main()
{
    int n,k,kk,sum1=0,sum2=0,i,j,ans=0,cnt=0;

    scanf("%d %d",&n,&k);
    kk=n-k;

    shop ob;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum1+=a[i];
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        sum2+=b[i];
    }
    for(i=0;i<n;i++)
    {
        ob.p1=a[i];
        ob.p2=b[i];
        ob.d=b[i]-a[i];
        data.push_back(ob);
    }

    sort(data.begin(),data.end());


    for(i=n-1;i>=0;i--)
    {
        cout<<data[i].p1<<" "<<data[i].p2<<" "<<data[i].d<<"\n";

        if(data[i].d>=0)
        {
            ans+=data[i].p1;
            cnt++;
            continue;
        }
        else if(cnt<k)
        {
            ans+=data[i].p1;
            cnt++;
        }
        else
        {
            ans+=data[i].p2;
        }
    }

    printf("%d\n",ans);
    return 0;
}
