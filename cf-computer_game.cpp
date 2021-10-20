#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int k,n,a,b;
    cin>>k>>n>>a>>b;
    if(k>n*a)
        cout<<n<<"\n";
    else if(k<=n*b)
        cout<<-1<<"\n";
    else
    {
        int l=0,r=n,mid,ans=0;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(k-mid*a-(n-mid)*b>0)
            {
                ans=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        cout<<ans<<"\n";
    }
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