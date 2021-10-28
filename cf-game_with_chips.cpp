#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n,m,k,x,y;
    cin>>n>>m>>k;
    for(int i=0;i<2*k;i++)
        cin>>x>>y;
        cout<<(n-1+m-1+n*m-1)<<endl;
    for(int i=1;i<n;i++)
        cout<<"U";
    for(int i=1;i<m;i++)
        cout<<"L";
    for(int i=0;i<n;)
    {
        for(int j=1;j<m;j++)
            cout<<"R";
        i++;
        if(i>=n)
            continue;
        cout<<"D";
        for(int j=1;j<m;j++)
            cout<<"L";
        i++;
        if(i>=n)
            continue;
        cout<<"D";
    }
    cout<<endl;
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