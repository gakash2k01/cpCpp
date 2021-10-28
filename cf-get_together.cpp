#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
long double x[100005],v[100005];
const long double del = 1e-9;
bool check1(long double t)
{
    long double li = x[0] - t * v[0], ri = x[0] + t * v[0];
    for(int i=1;i<n;i++)
    {
        li = max(li, x[i] - t * v[i]);
        ri = min(ri, x[i] + t * v[i]);
    }
    if (ri - li > del)
        return true;
    return false;
}
void solve()
{
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>x[i]>>v[i];
    long double l=0,r=1e9,ans=r;
    while(r-l>del)
    {
        long double mid=(l+r)/2;
        // cout<<l<<" "<<r<<" "<<mid<<endl;
        if(check1(mid))
        {
            // cout<<"Entered if"<<endl;
            r=mid;
            ans=mid;
        }
        else
        {
            // cout<<"Wait is it else?"<<endl;
            l=mid;
        }
    }
    cout<<setprecision(12)<<ans<<"\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}