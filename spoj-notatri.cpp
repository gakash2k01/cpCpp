#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve(int n)
{
    //write ur code here
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(&a[0],&a[n]);
    int cnt=0;
    for(int i=n-1;i>1;i--)
    {
        for(int j=i-1;j>0;j--)
        {
            int ans=(lower_bound(&a[0],&a[j],a[i]-a[j])-&a[0]);
            cnt+=ans;
            //cout<<"For "<<i<<" "<<j<<" "<<cnt<<endl;
            /*
            for(int k=j-1;k>=0;k--)
            {
                if(a[k]+a[j]<a[i])
                {
                    cout<<"Got "<<i<<" "<<j<<" "<<k<<endl;
                    cnt++;
                }
            }*/
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
    //cin>>t1;
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
            break;
        solve(n);
    }
    return 0;
}