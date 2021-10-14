#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int x;
    int sum=0;
    map <int,int> a;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
            a[x]++;
    }
    int cnt=0;
    int k=(2*sum)/n;
    //cout<<"k="<<k<<endl;
    if(2*sum % n != 0)
    {
        cout<<0<<"\n";
        return;
    }
    for(auto m:a)
    {
        if(m.first==k-m.first)
            cnt+=((a[m.first]*(a[m.first]-1)));
        else if(a.count(k-m.first))
            cnt+=(a[m.first]*a[k-m.first]);
    }
    cout<<(cnt>>1)<<"\n";
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