#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n,k;
    cin>>n>>k;
    n--;
    int cnt=0;
    int temp=1;
    while(temp<=k && n>0)
    {
        n-=temp;
        temp=temp<<1;
        cnt++;
    }
    cnt+=((n+k-1)/k);
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