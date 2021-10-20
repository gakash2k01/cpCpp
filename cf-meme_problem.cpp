#include <bits/stdc++.h>
#define int double
using namespace std;
void solve()
{
    //write ur code here
    int d,ans1,ans2;
    cin>>d;
    if(d>0 && d<4)
        cout<<"N\n";
    else
    {
        int del = d*d-4*d;
        ans1 = (d+sqrt(del))/2;
        ans2 = (d-sqrt(del))/2;
        if(ans1<=d && ans2<=d)
            printf("Y %.9lf %.9lf\n",ans1,ans2);
        else
            cout<<"N\n";
    }
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