#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<i+10 && j<n;j++)
        {
            //cout<<"Check "<<i<<" "<<j<<endl;
            if((j-i)==abs(s[j]-s[i]))
            {
                //cout<<i<<' '<<j<<endl;
                cnt++;
            }
        }
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