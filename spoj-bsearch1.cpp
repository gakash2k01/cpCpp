#include <bits/stdc++.h>
#define int long long
using namespace std;
    
void solve()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<q;i++)
    {
        int f=0,l=n,m;
        bool got =false;
        int ele;
        cin>>ele;
        got = binary_search(&a[0],&a[n],ele);
        int k=lower_bound(&a[0],&a[n],ele)-&a[0];
        if(!got)
            cout<<-1<<"\n";
        else
            cout<<k<<"\n";
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        solve();
    return 0;
}