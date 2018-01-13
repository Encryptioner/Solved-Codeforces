#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    string s,x;
    int pos,i,j,len,cnt=0;
    bool sol=true;
    cin>>x;
    s=x;
    len=s.length();
    pos=s.find("@");

    while(pos!=-1)
    {
        cnt++;
        //cout<<s<<" "<<pos<<" "<<cnt<<endl;
        if(cnt==1 && s[0]=='@')
        {
            sol=false;break;
        }
        else if(cnt>1)
        {
            if(s[0]=='@' || s[1]=='@')
            {
                sol=false;break;
            }
        }
        s=s.substr(pos+1,len);
        len-=pos+1;
        pos=s.find("@");
    }
    len=s.length();
    if(cnt>0 && sol==true && len>0)
    {
        s=x;
        len=s.length();
        cout<<s[0];
        for(i=1;i<len;i++)
        {
            cout<<s[i];
            if(s[i-1]=='@' && cnt>1){printf(",");cnt--;}
        }
        printf("\n");
    }
    else
    {
        printf("No solution\n");
    }
    return 0;
}
