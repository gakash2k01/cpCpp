#include <bits/stdc++.h>
//#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n;
    cin>>n;
    int a[n];
    int cnt=0;
    cin>>a[0];
    int mini=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<mini)
            mini=a[i];
    }
    set <int> b;
    for(int i=0;i<n;i++)
    {
        if(a[i]-mini>0)
        {
            b.insert(a[i]-mini);
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<-1<<"\n";
        return;
    }
    int k=(*b.begin());
    for(auto i:b)
    {
        k=__gcd(k,i);
        if(k==1)
            break;
    }
    cout<<k<<"\n";
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