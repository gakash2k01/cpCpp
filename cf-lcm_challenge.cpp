#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n,ansf=1;
    cin>>n;
    if(n==1)
        cout<<1<<endl;
    else if(n==2)
        cout<<2<<endl;
    else
    {
        int ans=n%2==0?(n-1):n;
        int temp,temp1;
        for(int i=n;i>n-2000 && i > 0;i--)
        {
            temp=(ans*i)/(__gcd(ans,i));
            for(int j=n;j>n-2000 && j>0;j--)
            {
                temp1=(j*temp)/(__gcd(j,temp));
                ansf=max(temp1,ansf);
                //cout<<temp<<endl;
            }
        }
        cout<<ansf<<endl;
    }
    
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