#include<bits/stdc++.h>//1st runtime error for not thinking of input 1
#define lld long long int//Accepted after contest
using namespace std;

struct node
{
    int number,count;
    bool operator < ( const node& c ) const
	{
		return count > c.count;
	}
};
vector<node>data;

int prime_factor(int num)
{
    int n,n1,i,j,l,siz,sizn,num1;
    vector<int>factor[num];

    num1=num;
    while(num--)
    {
    cin>>n;

    siz=data.size();
    if(siz==0 && n==1)//in case of 1, push only one 1
    {
        node ob;
        ob.number=1;
        ob.count=1;
        data.push_back(ob);
    }

    n1=n;
    l=sqrt(n);//finding factor

    for(i=2;i<=l;i++)
    {
        if(i>3)
        {
            i++;
        }
        if(n%i==0)
        {
            factor[num].push_back(i);

            while(n%i==0)
            {
                n=n/i;
            }
        }
    }

    if(n!=1)
    {
        factor[num].push_back(n);
    }

    siz=data.size();
    sizn=factor[num].size();

    for(i=0;i<sizn;i++)
    {
        bool val=false;

        for(j=0;j<siz;j++)
        {
            if(factor[num][i]==data[j].number)//if found factor is all ready in data vector, only increase count
            {
                val=true;
                data[j].count+=1;
                break;
            }
        }
        if(!val)//else push it to data vector
        {
            node ob;
            ob.number=factor[num][i];
            ob.count=1;
            data.push_back(ob);
        }
    }

    }

    sort(data.begin(),data.end());//sort data to find the maximum count, could be done by linear search
    cout<<data[0].count<<"\n";

    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);

    int num;
    cin>>num;

    prime_factor(num);
    return 0;
}
/*
Tourist's Code:

#include <bits/stdc++.h>

using namespace std;

const int N = 1234567;

int cnt[N];

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int foo;
    scanf("%d", &foo);
    cnt[foo]++;//counting number of repeatation of every input
  }
  int ans = 1;//ans will be at least 1

  for (int i = 2; i < N; i++) {//checking every number of range
    int cur = 0;
    for (int j = i; j < N; j += i) {//counting all number which have j%i==0 property
      cur += cnt[j];
    }
    ans = max(ans, cur);
  }
  printf("%d\n", ans);
  return 0;
}

*/

