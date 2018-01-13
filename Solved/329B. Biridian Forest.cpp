#include<bits/stdc++.h>//TLE
#define MAX 1001
#define pii pair<int,int>
using namespace std;

int row,col;

int gridbfs(int sx,int sy,int dx,int dy,vector<vector<int> >&cell, int dis)
{
	vector<vector<int> >d(row+1,vector<int>(col+1)), vis(row+1,vector<int>(col+1));
	int fx[]={1,-1,0,0};
    int fy[]={0,0,1,-1};
    int tx,ty;
//printf("before while2 %d %d\n",sx,sy);

	vis[sx][sy]=1;
	queue<pii>q;
	q.push(pii(sx,sy));

	while(!q.empty())
	{
		pii top=q.front();
		q.pop();
		for(int k=0;k<4;k++)
		{
			tx=top.first+fx[k];
			ty=top.second+fy[k];
			if(tx>=0 and tx<row and ty>=0 and ty<col and cell[tx][ty]!=-1 and vis[tx][ty]==0)
            {
				vis[tx][ty]=1;
				d[tx][ty]=d[top.first][top.second]+1;
				q.push(pii(tx,ty));
			}
		}
		//cout<<d[tx][ty]<<" "<<dis<<endl;
		if(vis[dx][dy]==1)//if destination is found
        {
            break;
        }

        if(d[tx][ty]-2>dis)//if any of cell's distance is larger than dis
        {
            //cout<<d[tx][ty]<<" "<<dis<<endl;
            break;
        }
	}
	return d[dx][dy];
}

int main()
{

    int i,j,sx,sy,dx,dy,c,breedx[MAX],breedy[MAX],val[MAX],dis,dis_breed,fight,stdis;
    char ch;

    cin>>row;
    cin>>col;
    {
        vector<vector<int> >cell(row+1,vector<int>(col+1));
        c=0;
        for(i=0;i<row;i++)
        {

            for(j=0;j<col;j++)
            {
                cin>>ch;

                if(ch=='T')
                {
                    cell[i][j]=-1;//if tree block
                }
                else if(ch=='S')//if me
                {
                    sx=i;
                    sy=j;
                }
                else if(ch=='E')//if exit
                {
                    dx=i;
                    dy=j;
                }
                else//if breeder
                {
                    breedx[c]=i;//get their co-ordinate
                    breedy[c]=j;

                    val[c]=ch-'0';//get no of breeders
                    c++;
                }
            }

        }
//printf("before grid call\n");
        dis=gridbfs(sx,sy,dx,dy,cell,1073741820);//shortest distance of me to exit
        fight=0;

        for(i=0;i<c;i++)
        {
            stdis=abs(breedx[i]-dx)+abs(breedy[i]-dy);//straight distance from breed position to exit cell
            //cout<<stdis<<endl;

            if(val[i]>0 && stdis<=dis)//if there is 1 or more breeders, then find their shortest path to exit
            {

                dis_breed=gridbfs(breedx[i],breedy[i],dx,dy,cell,dis);

                if(dis_breed<=dis && dis_breed!=0)//if breeder's shortest path is less than me, he can wait in exit cell to fight with me
                {
//cout<<breedx[i]<<" "<<breedy[i]<<" "<<dis_breed<<" "<<dis<<endl;
                    fight+=val[i];//then I have to fight with those breeder's who are attend in my exit cell
                }
            }
        }
        printf("%d\n",fight);
    }
    return 0;
}
