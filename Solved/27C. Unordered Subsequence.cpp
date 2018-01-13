#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    vector<int>v,r;
    int i,j,x,n,siz;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        v.push_back(x);
    }
    for(i=1;i<n;i++)
    {
        if(v[i]>v[i-1])
        {
            r.clear();
            r.push_back(i-1);
            r.push_back(i);
        }
        if(v[i]<v[i-1])
        {
            r.push_back(i);
            break;
        }
    }
    siz=r.size();
    if(siz!=3){r.clear();}

    for(i=1;i<n;i++)
    {
        if(siz==3){break;}
        if(v[i]<v[i-1])
        {
            r.clear();
            r.push_back(i-1);
            r.push_back(i);
        }
        if(v[i]>v[i-1])
        {
            r.push_back(i);
            break;
        }
    }
    siz=r.size();
    if(siz!=3){printf("0\n");}
    else
    {
        printf("3\n%d %d %d\n",r[0]+1,r[1]+1,r[2]+1);
    }

    return 0;
}
/*
sakib
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int arr[100002],n,i,flag;

    while(scanf("%I64d",&n) == 1)
    {
        for(i=1;i<=n;i++)
            scanf("%I64d",&arr[i]);

        flag = 0;

        for(i=1;i<n;i++)
        {
            if((arr[i+1]-arr[i])*(arr[i]-arr[1]) < 0)
            {
                printf("3\n");
                printf("1 %I64d %I64d\n",i,i+1);
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("0\n");
    }
    return 0;
}
*/
