#include<bits/stdc++.h>//Accepted
using  namespace std;

#define MAX 26
#define rep(i,x,n) for(i=x;i<n;i++)

vector<int>G[MAX],top_order;
int in[MAX],n;

int topological_sort()
{
    int I,K,M,cnt=0,u,l,x;
    char ch;

    priority_queue<int, vector<int>, std::greater<int> > q;
    rep(I,0,26)
    {
        if(in[I]==0)
        {
            q.push(I);
        }
    }
    while (!q.empty())
    {
        u = q.top();
        q.pop();
        top_order.push_back(u);

        l=G[u].size();

        rep(I,0,l)
        {
            x=G[u][I];
            in[x]-=1;
            //cout<<x<<"  v "<<in[x]<<endl;
            if(in[x]==0)
            {
                q.push(x);
            }
        }
        cnt++;
    }
    l=top_order.size();
    if (l != MAX)//for possiblity all 26 letter should be in topological order
    {
        cout << "Impossible\n";
    }
    else
    {

        rep(I,0,l)
        {
            x=top_order[I]+97;
            ch=x;
            cout<<ch;
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int I,K,M,l1,l,low,x,y;
    string s,s1;
    bool pos[MAX],imp=false;
    char ch;
    memset(pos,0,sizeof(bool)*MAX);
    scanf("%d",&n);

    cin>>s;
    if(n==1){ printf("abcdefghijklmnopqrstuvwxyz\n");}
    else
    {
        n-=1;
        while(n--)
        {
            s1=s;
            l1=s1.length();

            cin>>s;
            l=s.length();

            low=min(l,l1);

            rep(I,0,low)
            {
                if(s[I]!=s1[I])//if not  simillar, make condition for lexigraphical order
                {
                    x=s1[I]-97;
                    y=s[I]-97;
                    G[x].push_back(y);
                    pos[x]=pos[y]=1;
                    in[y]=in[y]+1;
                    //cout<<I<<" "<<x<<" "<<y<<" "<<in[y]<<" "<<s[I]<<" "<<s1[I]<<endl;
                    break;
                }
                if(I==l-1 && l1>l)//if smaller string is in lower order like aa and a
                {
                    imp=true;
                }
            }
        }

        rep(I,0,MAX)
        {
            if(pos[I]==0)//those who were not in condition
            {
                rep(K,I+1,MAX)//in alphabet upper letter is in order than lower order
                {
                    G[I].push_back(K);
                    in[K]=in[K]+1;//counting indegree
                }
            }

        }
        rep(I,0,MAX)
        {
            if(pos[I]==1)
            {
                sort(G[I].begin(),G[I].end());//sorting for better performence
            }
        }
        /*rep(I,0,MAX-1)
        {
            l=G[I].size();
            cout<<I+1<<" "<<in[I];
            //in[I]=l;
            rep(K,0,l)
            {
                x=G[I][K]+97;
                ch=x;
                cout<<" "<<ch;
            }
            printf("\n");
        }
        printf("jhj\n");*/
        if(imp){cout << "Impossible\n";}
        else{topological_sort();}
    }
    return 0;
}

