#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n,maxi=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    maxi++;
    vector <int> b(maxi,0);
    for(int i=0;i<n;i++)
        b[a[i]]++;
    int ans=1;
    for(int i=2;i<maxi;i++)
    {
        int cnt=0;
        for(int j=i;j<maxi;j+=i)
        {
            cnt+=b[j];
        }
        if(cnt>=2)
            ans=max(ans,i);
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