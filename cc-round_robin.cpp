#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code 
    int n,k;
    cin>>n>>k;
    int ans=(n*(n-1))/2 - ((n-k)*(n-k-1))/2;
    cout<<2*(ans/k)<<endl;
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