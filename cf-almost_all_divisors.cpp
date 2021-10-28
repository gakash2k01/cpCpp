#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n;
    cin>>n;
    int d[n];
    for(int i=0;i<n;i++)
        cin>>d[i];
    sort(&d[0],&d[n]);
    int l=0,r=n-1;
    int num=d[l]*d[r];
    bool b=true;
    //cout<<"num = "<<num<<endl;
    for(int k=2;k*k<=num || l<=r;k++)
    {
        if(l>r && num%k==0)
        {
            b=false;
            break;
        }
        if(l<=r && k*k>num)
        {
            b=false;
            break;
        }
        if(num%k==0)
        {
            //cout<<"Got "<<k<<" with d[l]= "<<d[l]<<" and d[r] = "<<d[r]<<endl;
            if(d[l]*d[r]!=num || d[l]!=k)
            {
                b=false;
                break;
            }
            l++;
            r--;
        }
    }
    if(!b)
        cout<<-1<<endl;
    else
        cout<<num<<endl;
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