#include<bits/stdc++.h>//Accepted
using namespace std;


int main()
{
    int t,i,j,k,node1,node2,src,node,cnt,edge,siz;
    bool reach;

    scanf("%d",&t);

    while(t--)
    {
        reach=false;
        scanf("%d %d",&node,&edge);

        for(i=0;i<edge;i++)
        {
            scanf("%d %d",&node1,&node2);

            if(node1==1 && node2==node)
            {
                reach=true;
            }
        }


        if(reach)
        {
            printf("Jorah Mormont\n");
        }
        else
        {
            printf("Khal Drogo\n");
        }

    }
    return 0;
}


