#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;
int binexpmod(int a,int n)
{
    int p=1;
    while(n>0)
    {
        if(n%2!=0)
            p=(p*(a%mod))%mod;
        a*=a;
        a%=mod;
        n=n>>1;
    }
    cout<<"Got: "<<(p%mod)<<endl;
    return p%mod;
}
void solve()
{
    //write ur code here
    int k;
    cin>>k;
    int n=binexpmod(2,k);
    n-=2;
    int p=binexpmod(4,n);
    p*=6;
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