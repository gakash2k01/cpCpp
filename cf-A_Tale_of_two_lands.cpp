#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=abs(a[i]);
    }
    sort(&a[0], &a[n]);
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        int k=(a[i]+1)/2;
        int l=0, r=i, ans=i, mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            //cout<<mid<<" "<<i<<" "<<k<<" "<<a[mid]<<" Entered 1\n";
            if(a[mid]>=k)
            {
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        //cout<<"I got "<<i<<" "<<ans<<endl;
        cnt+=(i-ans);
    }
    cout<<cnt<<endl;
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