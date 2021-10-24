#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int x,y;
    cin>>x>>y;
    if(x<y)
    {
        if((y-x)%2==0)
            cout<<(y-x)/2<<endl;
        else
            cout<<((y-x)/2 + 2)<<endl;
    }
    else cout<<x-y<<endl;
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