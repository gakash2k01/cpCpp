#include <bits/stdc++.h>
#define int long long
using namespace std;
const int lim=2e5+1;
int a[lim];
int n,k;
bool check(int m)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt+=((a[i]+m-1)/m-1);
        //cout<<"cnt = "<<cnt<<" "<<k<<endl;
    }
    if(cnt<=k)
        return true;
    return false;
}
void solve()
{
    //write ur code here
    cin>>n>>k;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    int l=1,r=maxi,mid=0,ans=maxi;
    while(l<r)
    {
        mid=l+(r-l)/2;
        //cout<<"mid = "<<mid<<endl;
        if(check(mid))
        {
            //cout<<"entered"<<endl;
            ans=mid;
            r=mid;
        }
        else
            l=mid+1;
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