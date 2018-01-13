#include<stdio.h>////Accepted after contest
#include<math.h>
#include<bits/stdc++.h>
#define lld unsigned long long int
using namespace std;
int main()
{
    lld b,d,s,i,j,arr[3],m,x,c=0,val;

    cin>>arr[0]>>arr[1]>>arr[2];
    //scanf("%I64d  %I64d  %I64d ",&arr[0],&arr[1],&arr[2]);

    if( (arr[0]==0 || arr[0]==1) && (arr[2]==0 || arr[2]==1) && (arr[1]==0 || arr[1]==1))
    {
        if(arr[0]==1 && arr[0]==0 && arr[0]==1)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    else
    {
    val=0;
    for(i=0;i<3;i++)
    {
        if(arr[i]>=val)
        {
            m=i;
            val=arr[i];
        }
    }
    x=m+10-1;
    //printf("%lld\n",x);
    if(x==9){x=2;}
    else{x=m-1;}
    //printf("%lld\n",x);
    if(arr[x]<arr[m]-1){c+=arr[m]-arr[x]-1;}
    //printf("%lld\n",c);
    x=m+1;
    if(x>2){x=0;}
    if(arr[x]<arr[m]-1){c+=arr[m]-arr[x]-1;}

    //printf("%I64d\n",c);
    cout<<c<<"\n";
    }
    //main();
    return 0;
}

