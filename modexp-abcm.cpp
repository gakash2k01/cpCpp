#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;
int modexp(int a, int b, int m)
{
    int p=1;
    while(b>0)
    {
        if(b%2==1)
            p=(p*a)%m;
        a*=a;
        a%=m;
        b=b>>1;
    }
    return p;
}
int modexp_abc(int a, int b,int c)
{
    const int mod1 = 998244353;
    int r = modexp(b, c, mod1-1);
    int ans = modexp(a, r, mod1);
    return ans;
}
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<modexp_abc(a,b,c)<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t1=1;
    cin>>t1;
    while(t1--)
    {
        solve(); 
    }
    return 0;
}