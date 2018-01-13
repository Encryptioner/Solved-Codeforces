#include <bits/stdc++.h>
using namespace std;

#define rep(i,x,n) for(i=x;i<n;i++)
#define MAX 109

int main()
{
    int I,K,M,siz,x,val,c,t,n,minc=5,ans[4],pos,pos2;
    string str,str3,str2;

    string strlist[4]={"R","B","Y","G"};
    char charlist[4]={'R','B','Y','G'};
    bool flag[4];
    vector<char>G;
    char ch;


    cin>>str;
    siz=str.length();

    rep(I,0,siz-3)
    {
        c=0;
        memset(flag,0,sizeof(bool));
        for(K=I,x=0;K<siz,x<4;K++,x++)
        {
            if(str[K]=='!')
            {
                c++;
                val=x;
            }
            if(str[K]=='R'){flag[0]=1;}
            if(str[K]=='B'){flag[1]=1;}
            if(str[K]=='Y'){flag[2]=1;}
            if(str[K]=='G'){flag[3]=1;}
        }

        if(c==0)
        {
            str2=str.substr(I,4);
            pos=I;
            minc=0;
            break;
        }
        else if(c==1)
        {
            pos=I;
            minc=0;

            rep(K,0,4)
            {
                if(flag[K]==0)
                {
                    ch=charlist[K];
                }
            }
            if(val==0){str2=ch+str.substr(I+1,3);}
            if(val==1){str2=str.substr(I,1)+ch+str.substr(I+2,2);}

            if(val==2){str2=str.substr(I,2)+ch+str.substr(I+3,1);}
            if(val==3){str2=str.substr(I,3)+ch;}

            break;
        }
        else
        {
            if(c<minc)
            {
                pos=I;
                minc=c;
                str3=str;

                rep(K,0,4)
                {
                    if(flag[K]==0)
                    {
                        G.push_back(charlist[K]);
                    }
                }
                x=0;

                rep(K,I,I+4)
                {
                    if(str3[K]=='!')
                    {
                        str3[K]=G[x];
                        x++;
                    }

                }

                str2="";
                str2=str3.substr(pos,4);
            }
            G.clear();
        }
    }
    cout<<str2<<endl;
    pos=(pos)%4;
    if(pos==3){str2=str2.substr(1,3)+str2.substr(0,1);}
    if(pos==2){str2=str2.substr(2,2)+str2.substr(0,2);}
    if(pos==1){str2=str2.substr(3,1)+str2.substr(0,3);}

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
