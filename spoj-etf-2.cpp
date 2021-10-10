//Alternate approach for spoj-etf

#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    const int lim = 1e7+5;
    vector <int> phi(lim);
    const int n=1e6+1;
    for(int i=0;i<n;i++)
        phi[i]=i;
    for(int i=2;i<n;i++)
        if(phi[i]==i)
            for(int j=i;j<n;j+=i)
                phi[j]-=phi[j]/i;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<phi[n]<<endl;
    }
    return 0;
}