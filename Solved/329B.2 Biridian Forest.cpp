#include<bits/stdc++.h>//Accepted
#define MAX 1001
#define pii pair<int,int>
using namespace std;

int row,col;
string G[MAX];
vector<vector<int> >d(MAX,vector<int>(MAX)), vis(MAX,vector<int>(MAX));

void gridbfs(int sx,int sy)
{
	int fx[]={1,-1,0,0};
    int fy[]={0,0,1,-1};
    int tx,ty;


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
            //printf("tx ty %d %d\n",tx,ty);

			if(tx>=0 and tx<row and ty>=0 and ty<col)
            {
                //cout<<G[tx][ty]<<" "<<vis[tx][ty]<<endl;
                if(G[tx][ty]!='T' and vis[tx][ty]==0)
                {
                    vis[tx][ty]=1;
                    d[tx][ty]=d[top.first][top.second]+1;
                    q.push(pii(tx,ty));
                }
            }
		}


	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i,j,dis,fight,b_dis;
    bool is=false;

    cin>>row;
    cin>>col;

        for(i=0;i<row;i++)
        {
            cin >> G[i];
        }

        //find distance of every cell from exit cell
        for(i=0;i<row && !is;i++)
        {
            for(j=0;j<col;j++)
            {
                if(G[i][j]=='E')
                {
                    gridbfs(i,j);
                    is=true;
                    break;
                }
            }
        }

        //find distance of me from exit cell
        is=false;
        for(i=0;i<row && !is;i++)
        {
            for(j=0;j<col;j++)
            {
                if(G[i][j]=='S')
                {
                    dis=d[i][j];
                    is=true;
                    break;
                }
            }
        }


        //check all cell which have equal or less distance from exit cell than me to exit cell
        fight=0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(G[i][j]>'0' && G[i][j]<='9')
                {
                    if(d[i][j]<=dis && vis[i][j]!=0)
                    {
                        fight+=G[i][j]-'0';
                    }
                }
            }
        }

        printf("%d\n",fight);

    return 0;
}
