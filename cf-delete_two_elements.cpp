#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int x;
    int sum=0;
    unordered_map <int,int> a;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
        if(a.find(x)==a.end())
            a[x]=1;
        else
            a[x]++;
    }
    int cnt=0;
    for(auto m:a)
    {
        int j = (del - avg + m.first);
        if(j==m.first && a[j]>1)
        {
            cnt++;
            continue;
        }
        if(a.find(j)==a.end())
            continue;
        cnt++;
    }
    cout<<cnt<<"\n";
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