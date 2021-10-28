#include <bits/stdc++.h>
#define int long long
using namespace std;
const int lim=1e9+5;
int a[3001][5];
int m[5];
int n;
bool check(int m)
{
    int m[5];
    for(int i=0;i<n;i++)
}
void solve()
{
    //write ur code here
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<5;j++)
            cin>>a[i][j];
    int l=1,r=1e9,ans=r;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(check(mid))
        {
            ans=mid;
            l=mid;
        }
        else
            r=mid;
    }
    cout<<ans<<endl;
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

incomplete