#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n;
    int a[26]={0};
    cin>>n;
    string s;
    cin>>s;
    int n1=s.size();
    int k=n1/n;
    //cout<<"Flag 1\n";
    if(k*n != n1)
    {
        cout<<"-1\n";
        return;
    }
    //cout<<"Flag 2\n";
    for(int i=0;i<n1;i++)
        a[s[i]-'a']++;
    string s1="";
    //<<"Flag 3\n";
    for(int i=0;i<26;i++)
    {
        if(a[i]%n!=0)
        {
            cout<<-1;
            return;
        }
        for(int j=a[i]/n;j>0;j--)
            s1+=(char)('a'+i);
    }
    //cout<<"Flag 4\n";
    for(int i=0;i<n;i++)
        cout<<s1;
    cout<<endl;
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