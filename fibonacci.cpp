#include <bits/stdc++.h>
#define int long long
using namespace std;
int rec_fib(int a,int b, int n)
{
    if(n==0)
        return a+b;
    return rec_fib(b,a+b,n-1);

}
void solve1()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    rec_fib(a,b,n)
}
void solve()
{
    //write ur code here
    int n;
    int a=0,b=1,c;
    //cout<<0<<" "<<1<<" ";
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<b;
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