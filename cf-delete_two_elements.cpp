#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int p,q;
        cin>>p>>q;
        if(q>p || p%q!=0)
            cout<<p<<'\n';
        else 
        { 
            map<int, int> m;
            int ans=0;
            int z=q;
            for(int i=2;i*i<=q;i++)
            {
                while(q%i==0)
                {
                    m[i]++;
                    q/=i;
                    
                }
            }
            if(q!=1)
                m[q]++;
        
        for(auto o:m)
        {
            int r_ans=p;
            while(r_ans%z==0)r_ans/=o.first;
            
            ans=max(r_ans,ans);
        }
           cout<<ans<<'\n';
       }
 
    }
    return 0;
}