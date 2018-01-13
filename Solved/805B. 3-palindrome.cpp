#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    char x,y,z,tmp;
    scanf("%d",&n);

    if(n==1){printf("b");}
    else if(n==2){printf("bb");}
    else
    {
        printf("bb");
        x='b';y='b';
        for(i=2;i<n;i++)
        {
            if(x==y)
            {
                if(x=='a'){z='b';}
                else{z='a';}
                printf("%c",z);
                tmp=y;
                y=z;
                x=tmp;
            }
            else
            {
                z=y;
                printf("%c",z);
                tmp=y;
                y=z;
                x=tmp;
            }
        }
    }
    printf("\n");
    return 0;
}
