#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n;
    cin>>n;
    vector <pair <int,int>> a(n);
    vector <int> t(n+1,0);
    vector <int> d(n+1,0);
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
        t[a[i].first]++;
        d[a[i].second]++;
    }
    int ans=n*(n-1)*(n-2)/6;
    for(pair <int,int> it: a)
    {   //cout<<"ans = "<<ans<<endl;
        ans-=((t[it.first]-1)*(d[it.second]-1));
    }
    cout<<ans<<"\n";
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