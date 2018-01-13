#include<bits/stdc++.h>//Accepted

bool base,tower[100000];

int main()
{
    int i,j,n,siz,x,cnt;

    scanf("%d",&n);

    memset(tower,0,sizeof(bool));
    x=n;

    for(i=0;i<n;i++)
    {
        base=1;
        scanf("%d",&siz);
        tower[siz-1]=1;

        for(j=siz;j<x;j++)
        {
            if(tower[j]!=1)
            {
                base=0;
                break;
            }
        }
        if(base)
        {
            cnt=0;
            while(x>0)
            {
                if(tower[x-1]!=1){break;}
                if(cnt>0){printf(" ");}
                printf("%d",x);
                cnt++;
                x--;
            }
            printf("\n");
        }
        else
        {
            printf("\n");

        }
    }
    return 0;
}

