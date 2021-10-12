#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5+5;
vector<int> divisors(N, 0);
void pre()
{
    
    for(int i=1;i<N;i++){
        for(int j=i;j<N;j+=i){
            divisors[j]++;
        }
    }
}
int32_t main() 
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    pre();
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<"Number of factors of "<<x<<" are "<<divisors[x]<<"\n";
    }
    return 0;
}