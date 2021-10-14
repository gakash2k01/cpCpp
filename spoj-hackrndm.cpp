#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int cnt=0;
    sort(a,a+n);
    for(auto i:a)
    {
        if(binary_search(&a[0],&a[n],i+k))
            cnt++;
        //cout<<i.first<<" "<<(i.first+k)<<" "<<a[i.first+k]<<" "<<cnt<<endl;
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