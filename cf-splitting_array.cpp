#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,k;
bool check(vector <int> a, int mid)
{
    int cnt=1,tot=0;
    for(int b:a)
    {
        if(tot+b>mid)
        {
            cnt++;
            tot=0;
        }
        tot+=b;
    }
    return cnt<=k;
}
void solve()
{
    //write ur code here
    cin>>n>>k;
    vector <int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum = 0, mx = 0;
    for (auto num : a)
    {
        mx = max(mx, num);
        sum += num;
    }
    int l=mx,r=sum,mid,ans=sum;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(check(a,mid))
        {
            r=mid-1;
            ans=mid;
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