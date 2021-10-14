#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n,k;
    cin>>n>>k;
    int a[k];
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
        a[i]=n-a[i];
        //cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(&a[0],&a[k]);
    int cnt=0;
    for(int i=0;i<k;i++)
    {
        if(a[i]<n)
        {
            cnt++;
            n-=a[i];
        }
        else
            break;
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