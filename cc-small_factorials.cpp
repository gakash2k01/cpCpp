#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n;
    cin>>n;
    vector <int> a(200,0);
    a[0]=1;
    int carry=0;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<100;j++)
        {
            a[j]*=i;
            a[j]+=carry;
            carry=a[j]/10;
            a[j]%=10;
        }
    }
    int i=99;
    while(a[i]==0)
        i--;
    string s="";
    while(i>=0)
        s+=to_string(a[i--]);
    cout<<s<<endl;
}
int32_t main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t1=1;
    cin>>t1;
    while(t1--)
    {
        solve();
    }
    return 0;
}