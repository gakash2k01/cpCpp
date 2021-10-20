#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int l,r,m;
    cin>>l>>r>>m;
    int k= m-r+l;
    int a,b,c;
    for(a=l;m%a>(r-l)||m%a>(m-(l-r));)
        a++;
    int n=m/a;
    if(n<=0)
        n=1;
    m-=(n*a);
    //cout<<"m = "<<m<<" n = "<<n<<endl;
    for(b=l;b<=r;b++)
    {
        if(b-m<=r && b-m>=l)
        {
            c=b-m;
            break;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<"\n";
}
int32_t main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t1=1;
    cin>>t1;
    while(t1--)
    {
        solve();
    }
    return 0;
}