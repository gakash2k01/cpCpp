#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int cnt=1;
    int n,m,k;
    cin>>n>>m>>k;
    m-=n;
    for(int i=0;i<=max(n-k,k-1);i++)
    {
        m--;
        if(i<n-k)
            m-=i;
        else
            m-=(n-k);
        if(i<k-1)
            m-=i;
        else
            m-=(k-1);
        if(m>=0)
            cnt++;
        else
            break;
    }
    cnt+=(max(0ll,m/n));
    cout<<cnt<<"\n";
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