#include <bits/stdc++.h>//Accepted
using namespace std;

#define rep(i,x,n) for(i=x;i<n;i++)
#define MAX 109

int main()
{
    int I,K,M,siz,x,val,c,t,n,minc=5,ans[4],pos,pos2;
    string str,str2="0000";
    char ch;
    char charlist[4]={'R','B','Y','G'};

    cin>>str;
    siz=str.length();

    rep(I,0,siz)
    {
        if(str[I]=='R'){ans[0]=I%4;}
        if(str[I]=='B'){ans[1]=I%4;}
        if(str[I]=='Y'){ans[2]=I%4;}
        if(str[I]=='G'){ans[3]=I%4;}
    }
    rep(I,0,4)
    {
        rep(K,0,4)
        {
            if(ans[K]==I)
            {
                ch=charlist[K];
                break;
            }
        }
        str2[I]=ch;
    }
    //cout<<str2<<endl;

    ans[0]=ans[1]=ans[2]=ans[3]=0;

    for(I=0;I<siz;I++)
    {
        if(str[I]!=str2[I%4]){ans[I%4]++;}
    }
    rep(I,0,4)
    {
        if(str2[I]=='R'){printf("%d ",ans[I]);}
    }
    rep(I,0,4)
    {
        if(str2[I]=='B'){printf("%d ",ans[I]);}
    }
    rep(I,0,4)
    {
        if(str2[I]=='Y'){printf("%d ",ans[I]);}
    }
    rep(I,0,4)
    {
        if(str2[I]=='G'){printf("%d\n",ans[I]);}
    }
    return 0;
}
//Approach 1: finding combination of RBYG, RBYG!, RBYG!!... and finding answer (in contest time)
//Approach 2: finding any consecutive R,B,Y,G or ! and 3 R/B/G/Y. if more than 1! random choose (later, wrong answer)
//Approach 3: finding position of R,B,Y,G and mod there position by 4. so we find the sequence. then count ! according to sequence
