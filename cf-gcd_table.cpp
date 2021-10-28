#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x;
    cin>>n;
    int k=n*n;
    map <int,int> a;
    vector <int> num;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(auto it=a.rbegin();it!=a.rend();it--)
    {
        if((it->second)>0)
        {
            int k=it->first;
            for(int i:num)
            {
                int val=__gcd(k,i);
                a[val]-=2;
            }
            num.push_back(it->first);
            a[it->first]--;
        }
    }   
    for(int i:num)
        cout<<i<<" ";
    cout<<"\n";
    return 0;
}