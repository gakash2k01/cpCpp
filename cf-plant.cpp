#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9+7;
int power(int b)
{
    int a=2;
    int p=1;
    while(b>0)
    {
        if(b%2==1)
            p=(p*a)%mod;
        a=(a*a)%mod;
        b=b>>1;
    }
    return p;
}
void solve()
{
    //write ur code here
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<1<<endl;
        return;
    }
    cout<<(((power(n)+1)*power(n-1))%mod)<<"\n";
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
        solve();
    }
    return 0;
}