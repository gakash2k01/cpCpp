#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,l;
    cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(&a[0],&a[n]);
    int d=2* max(a[0],l-a[n-1]);
    for(int i=1;i<n;i++)
        if(a[i]-a[i-1]>d)
            d=a[i]-a[i-1];
    cout<<fixed<<setprecision(12)<<(d/2.0)<<'\n';
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