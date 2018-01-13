#include<stdio.h>//Accepted

int main()
{
    int n,k,arr[502],i,j,x=0;

    scanf("%d %d",&n,&k);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf(" %d",arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]+arr[i-1]>=k)
        {
            continue;
        }
        else
        {
            x+=k-arr[i-1]-arr[i];
            arr[i]=k-arr[i-1];
        }
        //printf(" %d",arr[i]);
    }
    printf("%d\n",x);
    printf("%d",arr[0]);
    for(i=1;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
    //main();
    return 0;
}
