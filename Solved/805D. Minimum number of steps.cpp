#include <bits/stdc++.h>//Accepted

#define lld unsigned long long int

using namespace std;

lld pow2mod(lld n,lld p)
{
    lld u=1,w=2,r;

    while (n != 0)
    {
        if ((n & 0x1) != 0)
        {
            u = (u * w) % p; /* (mul-rdx) */
        }
        if ((n >>= 1) != 0)
        {
            w = (w * w) % p; /* (sqr-rdx) */
        }
    }
    r=u;
    if (r == 0)
    {
        r = p - 1; /* -1 mod p */
    }
    else
    {
        r = r - 1;
    }
    return r;
}

int main()
{
    lld i,l,ans=0,numa=0,tmp,p=1000000007;
    string s;

    cin>>s;
    l=s.length();

    for(i=0;i<l;i++)
    {
        //cout<<s[i]<<endl;

        if(i==0 && s[i]=='b')
        {
            continue;
        }
        else if(s[i]=='a')
        {
            //cout<<"cc "<<numa<<"\n";
            numa+=1;
        }
        else if(s[i]=='b')
        {
            //cout<<"hh ";
            if(s[i-1]=='a')
            {
                tmp=pow2mod(numa,p);
                ans=(ans+tmp)%p;
                s[i]='a';
                //cout<<"ff "<<ans<<"\n";
            }
            else
            {
                numa=0;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}
