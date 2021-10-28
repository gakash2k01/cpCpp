#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int n,k; 
        cin>>n>>k;
        cout<<n*(n-1)/2<<' ';
        if(n<k)
            cout<<n-1;
        else
            cout<<(n-k)*(n-k+1)/2+k-1;
        cout<<'\n';
    }
}