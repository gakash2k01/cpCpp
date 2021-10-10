#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k,n,x,y;
    cin>>k>>n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        a.push_back(make_pair(x,y));
    }
    sort(&a[0],&a[n]);
    for(int i=0;i<n;i++)
    {
        if(k<a[i].first)
        {
            cout<<"NO\n";
            return 0;
        }
        k+=a[i].second;
    }
    cout<<"YES\n";
    return 0;
}