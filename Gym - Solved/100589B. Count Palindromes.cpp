#include<bits/stdc++.h>//TLE
#include<sstream>
using namespace std;

#define rep(i,x,n) for(i=x;i<=n;i++)
int c=0;
int list1[16]={0,1,2,3,4, 5,10,11,12, 13,14,15,20, 21,22,23};
int list2[16]={0,1,2,10, 11,12,20,21, 22,30,31,32, 40,41,50,51};

string into_string(int a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}

bool check(int I,int M)
{
    string s1,s2;
    int l;

    s1=into_string(I);
    l=s1.length();
    if(l==1)
    {
        s1='0'+s1.substr(0,1);
    }

    s2=into_string(M);
    l=s2.length();
    if(l==1)
    {
        s2='0'+s2.substr(0,1);
    }
    s2=s2.substr(1,1)+s2.substr(0,1);

    if(s1==s2){return true;}
    else{return false;}
}
bool checkI(int I)
{
    int v;
    rep(v,0,16)
    {
        if(I==list1[v]){return true;}
    }
    return false;
}
bool checkM(int I)
{
    int v;
    rep(v,0,16)
    {
        if(I==list2[v]){return true;}
    }
    return false;
}

int counter(int sh1,int sh2,int sm1,int sm2,int ss1,int ss2)
{
    int I,K,M;
    rep(I,sh1,sh2)
    {
        if(checkI){
        rep(K,0,59)
        {
            if(I==sh1 && K<sm1){K=sm1;}

            if(I==sh2 && K>sm2){break;}

            if(K==0 || K==11 || K==22 || K==33 || K==44 || K==55)
            {
                rep(M,0,59)
                {
                    if(I==sh1 && K==sm1 && M<ss1){M=ss1;}

                    if(I==sh2 && K==sm2 && M>ss2){break;}

                    if(checkM){
                    if(check(I,M)){c++;}
                    }
                }
            }
        }}
    }
    return 0;
}
int main()
{
    int t,n,x,sh1,sh2,sm1,sm2,ss1,ss2,A,B,C;
    string s1,s2;


    cin>>t;
    while(t--)
    {
        cin>>s1;
        cin>>s2;
        bool newday=false;

        sh1=(s1[0]-48)*10+(s1[1]-48);
        sh2=(s2[0]-48)*10+(s2[1]-48);

        sm1=(s1[3]-48)*10+(s1[4]-48);
        sm2=(s2[3]-48)*10+(s2[4]-48);

        ss1=(s1[6]-48)*10+(s1[7]-48);
        ss2=(s2[6]-48)*10+(s2[7]-48);

        A=sh2,B=sm2,C=ss2;
        if(sh2<=sh1)
        {
            if(sh2<sh1){newday=true;}

            if(sh2==sh1 && sm2<=sm1)
            {
                if(sm2<sm1){newday=true;}
                if(sm2==sm1 && ss2<ss1){newday=true;}
            }
        }
        if(sh1==sh2 && sm1==sm2 && ss1==ss2)
        {
            if(sm1==0 || sm1==11 || sm1==22 || sm1==33 || sm1==44 || sm1==55)
            {
                if(check(sh1,ss1)){c++;}
            }
        }
        else
        {
            if(newday){sh2=23,sm2=59,ss2=59;}
            counter(sh1,sh2,sm1,sm2,ss1,ss2);
            if(newday){counter(0,A,0,B,0,C);}
        }

        printf("%d\n",c);
        c=0;
    }
    return 0;
}
