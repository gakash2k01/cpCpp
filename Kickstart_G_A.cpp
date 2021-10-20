#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n,d,c,m;
    char ch;
    cin>>n>>d>>c>>m;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        ch=s[i];
        if(ch=='C')
            c--;
        else if(ch=='D')
        {
            if(d<=0 || c<0)
            {
                //cout<<"Breaks at i = "<<i<<" c = "<<c<<" d = "<<d<<endl;
                cout<<"NO\n";
                return;
            }
            d--;
            c+=m;
        }
    }
    cout<<"YES\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t1=1;
    cin>>t1;
    for(int i=1;i<=t1;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}