#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100005];
int b[100005];
int n,m,cstf;
int cost(int k)
{
    int cst=0;
    for(int i=0;i<n;i++)
        if(a[i]<k)
            cst+=(k-a[i]);
    for(int i=0;i<m;i++)
        if(b[i]>k)
            cst+=(b[i]-k);
    cstf=min(cstf,cst);
    return cst;
}
void solve()
{
    cstf=1e18;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    int mn=1,mx=1e9;
    while(mx-mn>=3)
    {
        //cout<<mx<<' '<<mn<<endl;
        int md1=mn+(mx-mn)/3;
        int md2=mx-(mx-mn)/3;
        if(cost(md1)<cost(md2))
            mx=md2-1;
        else if(cost(md1)>cost(md2))
            mn=md1+1;
        else
        {
            mn=md1;
            mx=md2;
        }
    }
    for(int i=mn;i<=mx;i++)
        cost(i);
    cout<<cstf<<"\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}