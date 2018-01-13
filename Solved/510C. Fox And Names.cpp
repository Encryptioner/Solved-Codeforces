#include<bits/stdc++.h>
using  namespace std;

#define MAX 1000
#define rep(i,x,n) for(i=x;i<n;i++)

vector<int>G[MAX];
vector<char>serial;

bool pos[26],pos2[26],pos3[26];

int main()
{
    int n,I,K,M,l1,l,low,x,ch;
    string s,s1;
    bool imp=false;
    char pr;

    scanf("%d",&n);

    if(n==1){cin>>s; printf("abcdefghijklmnopqrstuvwxyz\n");}
    else
    {
        cin>>s;
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
                if(s[I]!=s1[I])
                {
                    x=G[I].size();
                    if(x>0){
                    if(G[I][x-1]!=s1[I]) {G[I].push_back(s1[I]);}}
                    if(x==0){G[I].push_back(s1[I]);}

                    G[I].push_back(s[I]);
                    break;
                }
            }
        }
        memset(pos,0,sizeof(bool)*26);
        rep(I,0,MAX)
        {
            l=G[I].size();
            if(l>0)
            {
                memset(pos2,0,sizeof(bool)*26);
                rep(K,0,l)
                {
                    ch=G[I][K]-97;
                    if(pos2[ch]==1)
                    {
                        imp=true;
                        break;
                    }
                    if(pos[ch]==0)
                    {
                        pos[ch]=1;
                        pos2[ch]=1;
                        serial.push_back(G[I][K]);
                    }
                }
                G[I].clear();
                if(imp){break;}
            }
        }
        //memset(pos3,0,sizeof(bool)*26);
        if(!imp){

        l=serial.size();
        rep(I,0,l)
        {
            rep(K,0,26)
            {
                if(pos[K]==0 && K<serial[I]-97)
                {
                    pr=K+97;
                    pos[K]=1;
                    cout<<pr;
                }
            }
            cout<<serial[I];
        }
        x=serial[l-1]-97;
        rep(K,x,26)
        {
            if(pos[K]==0)
            {
                pr=K+97;
                pos[K]=1;
                cout<<pr;
            }
        }
        printf("\n");

        }
        else
        {
            printf("impossible\n");
        }
        serial.clear();
        memset(pos,0,sizeof(bool)*26);
        memset(pos2,0,sizeof(bool)*26);
    }
    return main();
}

/*#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>

#define rep(i,j,k) for(i=j;i<=k;i++)
#define rrep(i,j,k) for(i=j;i>=k;i--)
#define INF 0x3f3f3f3f

using namespace std;

int n,i,j,l,l1,flag,tab,tot,o,f[201][201],vis[201];
char s[200],s1[201],ans[201];

int main(){
    freopen("510C. Fox And Names.txt","r",stdin);
    cin>>n;
    gets(s);
    gets(s);
    l=strlen(s);
    rep(i,0,25)
    rep(j,0,25)
        f[i][j]=0;
    flag=1;
    rep(i,2,n){
        gets(s1);
        l1=strlen(s1);
        j=0;
        while ((j<l1)&&(j<l)&&(s[j]==s1[j]))
            j++;
        if ((j!=l1)&&(j!=l)){
            f[s[j]-'a'][s1[j]-'a']=1;
        }
        else{
            if (l>l1)
                flag=0;
        }
        strcpy(s,s1);
        l=l1;
    }
    rep(i,0,25)
        vis[i]=1;
    rep(o,0,25){
        tab=1;
        rep(i,0,25)
            if (vis[i]){
            tot=1;
            rep(j,0,25)
                if (f[j][i])
                    tot=0;
            if (tot){
                vis[i]=0;
                ans[o]=i+'a';
                tab=0;
                rep(j,0,25)
                    f[i][j]=0;
                break;
            }
        }
        if (tab){
            flag=0;
            break;
        }
    }
    if (flag){
        rep(o,0,25)
            cout<<ans[o];
        cout<<endl;
    }
    else{
        cout<<"Impossible"<<endl;
    }
    return 0;
}
*/
