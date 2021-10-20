#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n,kv;
    cin>>n>>kv;
    int b[n];
    int pre[n+1];
    pre[0]=0;
    for(int i=0;i<n;i++)
    {// Taking input and creating prefix array.. where pre[i+1] has sum of values till i
        cin>>b[i];
        pre[i+1]=pre[i]+b[i];
    }
    // cout<<"Checking prefix calc:"<<endl;
    ///////////////
    // for(int i=0;i<n;i++)
    //     cout<<"For "<<i<<" "<<b[i]<<" "<<pre[i+1]<<endl;
    ///////////////
    for(int i=1;i<=n;i++)
    {// This loop controls the number of trees which can be anything from 1 to n
        for(int j=i;j>0;j--)
        {// This loop controls the number of trees in first patch.. it can be anything from 1 to i
            for(int k=0;k+i<=n;k++)
            {// This loop contols the position of first patch.. it can be anything between 0 and n-i
                int l=k+j+1; 
                // This is the starting position of the second patch. It has to be a position 2 more than last position of first patch.
                int cnt=pre[k+j]-pre[k];
                // This has the count of bananas in first patch. It is always feasible.
                while(l+(i-j)<=n)
                {
                    int cnt1=pre[l+(i-j)]-pre[l];
                    // Count for the second patch. Can be zero.
                    l++;
                    //cout<<"Iteration "<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<cnt<<" "<<cnt1<<endl;
                    if(cnt+cnt1==kv)
                    {
                        cout<<i<<"\n";
                        return;
                    }
                    // If any time it matches 'i' would be minimum
                }
            }
        }
    }
    cout<<-1<<"\n";
}
int32_t main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t1=1;
    cin>>t1;
    for(int i=1;i<=t1;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}