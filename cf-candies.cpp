#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,k;
bool check(int m)
{
    //cout<<m<<" ";
    int t=n;
    int cnt=0;
    while(t>0)
    {
        cnt+=min(t,m);
        t-=m;
        t=t-((int)(t/10));
        //cout<<t<<" Entered\n";
    }
    // cout<<"k = "<<k<<" cnt = "<<cnt<<endl;
    return cnt>=k;
}
void solve()
{
    cin>>n;
    k=(n+1)/2;
    int l=1,r=n,ans=1;
    while(r-l>10)
    {
        int mid=l+(r-l)/2;
        // cout<<l<<" "<<mid<<" "<<r<<endl;
        if(check(mid))
        {
            //cout<<"Entered"<<endl;
            ans=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
    for(int i=r;i>=l;i--)
        if(check(i))
            ans=min(ans,i);
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