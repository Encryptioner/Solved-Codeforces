#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,l,x,y,i,j,cnt,z;

    cnt=1;
    x=1;

    scanf("%d",&n);
    if(n>2)
    {
        printf("2\n");
    }
    else
    {
        printf("1\n");
    }

    for(z=2;z<=n+1;z++)
    {
        l=sqrt(z);
        j=z;
        y=z;
        for(i=2;i<=l;i++)
        {
            if(i>3)
            {
                i++;
            }
            //printf("\n%d %d\n",j,i);
            while(j%i==0)
            {
                j=j/i;
            }
        }
        //printf("\n%d %d %d\n",z,j,y);
        if(z>2)
        {
            printf(" ");
        }
        if(y==j || z==2)
        {
            printf("1");
        }
        else
        {
            //printf("%d %d\n",j,y);
            printf("2");
        }

    }
    printf("\n");
    return 0;
}
