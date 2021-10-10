#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;
int binexpmod(int a,int n,int m)
{
    int p=1;
    while(n>0)
    {
        if(n%2!=0)
            p=(p*(a%m))%m;
        a*=a;
        a%=m;
        n=n>>1ll;
    }
    //cout<<"Got: "<<(p%mod)<<endl;
    return p%m;
}
void solve()
{
    //write ur code here
    int k;
    cin>>k;
    int n=binexpmod(2,k,mod-1);
    n-=2ll;
    int p=binexpmod(4,n,mod);
    p*=6ll;
    p%=mod;
    cout<<p<<"\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t1=1;
    //cin>>t1;
    while(t1--)
    {
        //cout<<"Test :"<<(16-t1)<<endl;
        solve();
    }
    return 0;
}