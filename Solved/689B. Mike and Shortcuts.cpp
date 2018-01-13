#include <bits/stdc++.h>//Accepted by BFS
#define MAX 200005
using namespace std;

vector<int>G[MAX];
int level[MAX]={0},parent[MAX]={0};

void bfs(int n,int src)
{
	queue<int>Q;
	Q.push(src);
	int visited[MAX]={0};

	visited[src]=1;
    level[src]=0;

	while(!Q.empty())
	{
		int u=Q.front();
		int s=G[u].size();
		for(int i=0;i<s;i++)
		{
			int v=G[u][i];
			if(!visited[v])
			{
				level[v]=level[u]+1;
				parent[v]=u;
				visited[v]=1;
				Q.push(v);
			}
		}
		Q.pop();
	}
}

int main()
{
    int n,i,x;
    scanf("%d",&n);

    scanf("%d",&x);
    G[1].push_back(x);

    for(i=2;i<=n;i++)
    {
        scanf("%d",&x);
        G[i].push_back(x);//pushing shortcut to graph
        G[i].push_back(i-1);////pushing all edge of cost 1 to graph which are incident
        G[i-1].push_back(i);
    }
    //applying bfs to find distance from 1 to all node
    bfs(n,1);
    for(i=1;i<n;i++)
    {
        printf("%d ",level[i]);//print distance from 1
    }
    printf("%d\n",level[i]);
    return 0;
}
