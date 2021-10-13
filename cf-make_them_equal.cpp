#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;
void solve()
{
    //write ur code here
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    bool n1=false;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=c)
        {
            n1=true;
            break;
        }
    }
    bool n2=false;
    if(s[n-1]!=c)
        n2=true;
    if(!n1 && !n2)
    {
        cout<<0<<"\n";
        return;
    }
    else if(n1 && !n2)
    {
        cout<<1<<"\n"<<n<<"\n";
        return;
    }
    else if(!n1 && n2)
    {
        cout<<1<<"\n"<<n-1<<"\n";
        return;
    }
    bool got =false;
    int gotv=0;
    for(int i=0;(n-i-1)>=0;i++)
    {
        if(s[n-i-1]==c)
        {
            for(int j=n;j>n-i;j--)
            {
                if(j%(n-i)==0)
                    break;
                if(j==n-i+1)
                {
                    got=true;
                    gotv=n-i;
                }
            }
        }
        if(got)
            break;
    }
    if(got)
        cout<<1<<" \n"<<gotv<<"\n";
    else
        cout<<2<<" \n"<<n-1<<" "<<n<<"\n";
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
