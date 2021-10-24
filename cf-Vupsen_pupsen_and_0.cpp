#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n;
    cin>>n;
    int a[n];
    int mini=100000000000,ind=0;
    int b[n];
    int su=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(mini>abs(a[i]))
        {                
            mini=abs(a[i]);
            ind=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        b[i]=(mini)/(__gcd(mini,abs(a[i])));
        b[i]=b[i]*(a[i]<0?-1:1);
        su+=(b[i]*a[i]);
        if(b[i]*a[i]<=0)
            cout<<"Wrong"<<endl;
    }
    b[ind]=su-abs(b[ind]);
    b[ind]/=a[ind];
    b[ind]=-b[ind];
    su=0;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
        su+=(a[i]*b[i]);
    }
    cout<<endl;
    cout<<"Sum="<<su<<endl;;
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