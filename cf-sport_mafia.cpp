#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n,k;
    cin>>n>>k;
    
    int l=0,r=n,x;
    while(l<=r)
    {
        x=l+(r-l)/2;
        int ans=(n-x)*(n-x+1)/2 - x;
        if(ans==k)
            break;
        else if(ans<k)
            r=x-1;
        else
            l=x+1;
    }
    cout<<x<<endl;
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