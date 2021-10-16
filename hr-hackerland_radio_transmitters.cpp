#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(&a[0],&a[n]);
    int cnt=0;
    int i=0;
    while(i<n)
    {
        cnt++;
        int loc=a[i]+k;
        while(i<n && a[i]<=loc) i++;
        loc=a[--i] + k;
        while(i<n && a[i]<=loc) i++;
    }
    cout<<cnt<<'\n';
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
