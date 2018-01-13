#include<bits/stdc++>//accepted
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);//can use cin,cout like scanf and printf but not endl
    int i,j,k,l,x,y;
    bool flag;

    //while(1)//No need to use this. just think every test runs starting from main or from first input line
    {
        string data[4];
        flag=true;
        for(i=0;i<4;i++)
        {
            cin>>data[i];
        }
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)//checking every cell
            {
                if(i>=1 && j>=1 && flag==true)
                {
                    //checking square
                    x=0,y=0;
                    (data[i-1][j-1]=='#') ? ++x : ++y;
                    (data[i-1][j]=='#') ? ++x : ++y;
                    (data[i][j-1]=='#') ? ++x : ++y;
                    (data[i][j]=='#') ? ++x : ++y;

                    //cout<<i<<" "<<j<<" "<<x<<" "<<y<<"\n";
                    if( (x>=3 && y<=1) || (y>=3 && x<=1) )//if 3# and 1. , it can be repainted and vice versa
                    {
                        flag=false;
                        break;
                    }
                }
            }
        }
        printf( (flag) ? "NO\n" : "YES\n" );
    }
    return 0;
}
