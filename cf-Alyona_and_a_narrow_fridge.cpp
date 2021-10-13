#include <bits/stdc++.h>
#define int long long
using namespace std;
bool dec(int a, int b)
{
    return a>=b;
}
void solve()
{
    //write ur code here
    int n1,h;
    cin>>n1>>h;
    int a[n1];
    int b[n1];
    for(int i=0;i<n1;i++)
        cin>>a[i];
        int cnt=0;
    for(int n=1;n<=n1;n++)
    {
        for(int i=0;i<n;i++)
            b[i]=a[i];
        sort(&b[0],&b[n]);
        reverse(&b[0],&b[n]);
        int h1=0;
        for(int i=0;i<n;i+=2)
            h1+=b[i];
        if(h1<=h)
            cnt=n;
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