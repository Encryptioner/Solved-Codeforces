#include<stdio.h>
#include<math.h>

int main()
{
    int n,t,k,d,i,cook,cook_left,cook_done,time,best,v;
    double x;

    scanf("%d %d %d %d",&n,&t,&k,&d);
    if(n>k){
    x=ceil( (double)n/(double)k );

    cook=(int)x;//no of needed cook

    x=ceil( (double)d/(double)t );
    v=(int)x;
    cook_done=d/t;//at time d
    cook_left=cook-(d/t);//at time d
    if(v!=cook_done)
    {
        cook_left-=1;
    }
    cook_done=cook-cook_left;

    //printf("%d %d\n",cook,cook_left);
    if((cook_left%2)==0)
    {
        x=ceil( (double)cook_left/2.0 );
        v=(int)x;
        time=cook_done*t+v*t;
    }
    else
    {
        x=ceil( (double)cook_left/2.0 );
        v=(int)x;
        time=d+v*t;
    }
    //printf("%d\n",time);
    if(time<(t*cook))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
