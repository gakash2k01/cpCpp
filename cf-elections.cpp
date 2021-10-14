#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int a,b,c;
    cin>>a>>b>>c;
    bool bo=false;
    int maxi=max(a,max(b,c));
    if((maxi==b && maxi==c) ||
       (maxi==a && maxi==c) ||
    (maxi==a && maxi==b) )
        bo=true;
    if(!bo)
    {
        cout<<(maxi-a==0?maxi-a:maxi-a+1)<<" "<<(maxi-b==0?maxi-b:maxi-b+1)<<" "<<(maxi-c==0?maxi-c:maxi-c+1)<<"\n";
    }
    else
    {
        maxi++;
        cout<<maxi-a<<" "<<maxi-b<<" "<<maxi-c<<"\n";
    }
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