#include <bits/stdc++.h>
#define int long long
using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int fact(int n)
{
    p=1;
    while(n--)
        p*=n;
    return p;
}
void solve()
{
    //write ur code here
    int n;
    cin>>n;
    fact(n);
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