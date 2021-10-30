#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    string a;
    cin>>a;
    int n=a.size();
    cout<<n<<" "<<a<<endl;
    int cnt_s=1;
    char temp=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]==temp){
            cnt_s++;
        cout<<"Cnt s increased with a[i]= "<<a[i]<<' '<<temp<<endl;}
    }
    int cnt_e=1;
    char temp1=a[n-1];
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==temp1)
            cnt_e++;
    }
    cout<<cnt_s<<" "<<cnt_e<<" "<<temp<<" "<<temp1<<" ";
    if(temp==temp1)
        cout<<a;
    else if(cnt_e<=cnt_s)
    {
        cout<<"Entered 1 ";
        for(int i=0;i<(n-cnt_e);i++)
        {
            cout<<"L1 "<<a[i];
        }
        for(int i=cnt_e;i<n;i++)
            cout<<"L2 "<<temp;
    }
    else
    {
        cout<<"Entered 2 ";
        for(int i=0;i<(n-cnt_e);i++)
            cout<<"L3 "<<temp1;
        for(int i=cnt_e;i<n;i++)
            cout<<"L4 "<<a[i];
    }
    cout<<"\n";
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