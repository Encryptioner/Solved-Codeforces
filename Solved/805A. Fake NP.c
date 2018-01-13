#include<stdio.h>

int main()
{
    int l,r,x;

    scanf("%d %d",&l,&r);

    if(l!=r)
    {
        printf("2\n");
    }
    else
    {
        if((l%2)==0)
        {
            printf("2\n");
        }
        else
        {
            printf("%d\n",l);
        }
    }
    return 0;
}


