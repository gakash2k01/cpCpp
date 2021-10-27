#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n,q;
    cin>>n>>q;
    vector <int> a(n,0);
    vector <int> b(n+1,0);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int l,r;
    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        b[l-1]++;
        b[r]--;
    }
    for(int i=1;i<n;i++)
        b[i]=b[i-1]+b[i];
    sort(&a[0],&a[n]);
    sort(&b[0],&b[n]);
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=(b[i]*a[i]);
    cout<<sum<<"\n";
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