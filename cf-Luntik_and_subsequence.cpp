#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n;
    cin>>n;
    int a=1,b=0,x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==0)
            a=a<<1;
        else if(x==1)
            b++;
    }
    cout<<(b*a)<<endl;
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