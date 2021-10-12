#include <bits/stdc++.h>
#define int long long
using namespace std;
const int n = 1e5;
vector <int> primes;
void pre()
{
    int a[n];
    a[0]=0;
    a[1]=0;
    for(int i=2;i<n;i++)
        a[i]=1;
    for(int i=2;i*i<n;i++)
    {
        for(int j=i*i;j<n;j+=i)
            a[j]=0;
    }
    for(int i=2;i<n;i++)
        if(a[i]==1)
            primes.push_back(i);
}
int32_t main() 
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    pre();
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        vector<bool> a(y-x+1,true);
        for(auto p:primes)
        {
            for(int j=max((x+p-1)/p * p,p*p);j<=y;j+=p)
                a[j-x]=false;
        }
        for(int i=0;i<(y-x+1);i++)
            if(a[i] && i+x>1)
                cout<<i+x<<"\n";
        cout<<"\n";
    }
    return 0;
}