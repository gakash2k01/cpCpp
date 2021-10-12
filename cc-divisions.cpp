#include <bits/stdc++.h>
#define int long long
using namespace std;
const int n=100001;
int a[n];
vector <int> primes;
void pre()
{
    a[0]=0;
    a[1]=0;
    for(int i=2;i<n;i++)
        a[i]=1;
    for(int i=2;i*i<n;i++)
    {
        for(int j=i*i;j<n;j+=i)
            a[j]=0;
    }
    for(int i=0;i<n;i++)
        if(a[i]==1)
            primes.push_back(i);
}
void solve()
{
    //write ur code here
    int num,a,b,score=0;
    cin>>num>>a>>b;
    if(a<0 && b<0)
        score=(num%2==0?a:b);
    else if(a>=0 && b>=0)
    {
        while(num%2==0)
        {
            score+=a;
            num=num>>1;
        }
        for(auto p:primes)
        {
            if(p>num*num)
                break;
            while(num%p==0)
            {
                score+=b;
                num/=p;
            }
        }
        if(num>1)
            score+=b;
    }
    else if(a>=0 && b<0)
    {
        if(num%2!=0)
            score+=b;
        while(num%2==0)
        {
            score+=a;
            num=num>>1;
        }
    }
    else
    {
        if(num%2==0)
            score+=a;
        while(num%2==0)
            num=num>>1;
        for(auto p:primes)
        {
            if(p>num*num)
                break;
            while(num%p==0)
            {
                score+=b;
                num/=p;
            }
        }
        if(num>1)
            score+=b;
    }
    cout<<score<<"\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    pre();
    int t1=1;
    cin>>t1;
    while(t1--)
    {
        solve();
    }
    return 0;
}