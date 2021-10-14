#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(&a[0], &a[n]);
    int p[n+1];
    p[0]=0;
    int i;
    for(i=0;i<n;i++)
        p[i+1]=p[i]+a[i];
    //cout<<"Got: "<<endl;
    // for(int i=0;i<n;i++)
    //     cout<<a[i]<<" "<<p[i+1]<<endl;
    int acc;
    for(i=n-1;i>0;i--)
    {
        acc=(p[n]-p[i])-(n-i)*a[i-1];
        //cout<<i<<endl;
        if(acc>=m)
            break;
    }
    //cout<<"i = "<<i<<" acc = "<<acc<<endl;
    int ans=(p[n]-p[i]-m)/(n-i);
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