#include <bits/stdc++.h>
#define int long long
using namespace std;
const int n=1e6;
int32_t main()
{
    vector<int> spf(n);
    for(int i=0;i<n;i++)
        spf[i]=i;
    for(int i=2;2*i<n;i++)
    {
        if(spf[i]==i)
        {
            for(int j=2*i;j<n;j+=i)
                    spf[j]=i;
        }
    }
    // for(int i=0;i<n;i++)
    //     cout<<i<<" "<<spf[i]<<"\n";
    return 0;
}