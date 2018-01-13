#include <stdio.h>//Accepted

int main()
{
    int k,r,x,i;
    int w1x;
    scanf("%d %d",&k,&r);
    for(i=1;;i++)
    {
        x=k*i;
        if((x%10)==0)
        {
            printf("%d\n",i);
            break;
        }
        else if((x%10)==r)
        {
            printf("%d\n",i);
            break;
        }
    }
    //main();
    return 0;
}
