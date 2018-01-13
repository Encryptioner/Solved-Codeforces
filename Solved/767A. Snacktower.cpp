#include<bits/stdc++.h>//WA unknown cause, print different in judge pc

using namespace std;

int main()
{
    int i,j,n,siz,x,cnt;

    scanf("%d",&n);
    bool base,tower[n],place[n];
    int arr[n];

    memset(tower,0,sizeof(bool));
    x=n;

    for(i=0;i<n;i++)
    {
        base=true;
        //scanf("%d",&siz);
        cin>>siz;
        //siz=arr[i];
        tower[siz-1]=1;

        for(j=siz;j<n;j++)
        {
            if(tower[j]!=1)
            {
                base=false;
                break;
            }
        }
        if(base)
        {
            cnt=0;
            while(1)
            {
                if(tower[x-1]!=1){break;}
                if(cnt>0){printf(" ");}
                //printf("%d",x);
                cout<<x;
                cnt++;
                x--;
            }
            //printf("\n");
            cout<<"\n";
        }
        else
        {
            //printf("\n");
            cout<<"\n";
        }
    }
    return 0;
}
