#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,i,val,x=0;
    scanf("%d %d",&a,&b);

    if(a<b)
    {
        printf("0\n");
    }
    else if(a==b)
    {
        printf("infinity\n");//o mod n=0, 1 mod n=1
    }
    else
    {
        val=a-b;
        for(i=1;i*i<=val;i++)
        {
            if((val%i)==0)
            {
                if(i>b)
                {
                    x+=1;
                }
                if((val/i)>b && (val/i)!=i)
                {
                    x+=1;
                }
            }
        }
        printf("%d\n",x);
    }
    //main();
    return 0;
}
//(val/i)%i==0 &&
