#include<bits/stdc++.h>//wrong
using namespace std;

int flag[9];
int main()
{
    string str;

    cin>>str;

    int len,i,j,count=0;
    len=str.length();

    cout<<len<<endl;
    for(i=0;i<len;i++)
    {
        if(str[i]=='B' && flag[0]==0)
        {
            flag[0]=1;
        }
        if(str[i]=='u' && flag[0]==1)
        {
            flag[1]=1;
        }
        if(str[i]=='l' && flag[1]==1)
        {
            flag[2]=1;
        }
        if(str[i]=='b' && flag[2]==1)
        {
            flag[3]=1;
        }
        if(str[i]=='a' && flag[3]==1)
        {
            flag[4]=1;
        }
        if(str[i]=='s' && flag[4]==1)
        {
            flag[5]=1;
        }
        if(str[i]=='a' && flag[5]==1)
        {
            flag[6]=1;
        }
        if(str[i]=='u' && flag[6]==1)
        {
            flag[7]=1;
        }
        if(str[i]=='r' && flag[7]==1)
        {
            flag[8]=1;
        }
        //else{continue;}
        cout<<str[i];
        for(j=0;j<9;j++)
            {
                cout<<flag[j];
            }
            printf("\n");
        if(flag[8]==1)
        {
            count++;
            for(j=0;j<9;j++)
            {
                flag[j]=0;
            }
        }
    }
    printf("%d\n",count);

    return main();
}
//if(flag[0]==1 && flag[1]==1 && flag[2]==1 && flag[3]==1 && flag[4]==1 &&
           //flag[5]==1 && flag[6]==1 && flag[7]==1 && flag[8]==1)
