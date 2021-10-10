#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;
int gcd(int a, int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(b==1)
        return a;
    return gcd(b,a%b);
}
void solve()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
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