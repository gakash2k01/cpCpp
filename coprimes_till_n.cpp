/*
Euler's Totient Function(ETF) or phi function
==> We are checking in the range [1,n]
==> Count of numbers in the range [1,n] which have gcd equal to 1 with n

phi(1) = 1

phi(p) = p - 1, p is prime

phi(p^k) = p^k - p^(k-1)

N = p1*a1 p2*a2 p3^a3 .... pn^an
-----------------------------------
p(N) = N * (1 - 1/p1) * (1 - 1/p2) ... (1 - 1/pn)
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;
const int n=1e6;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int z=n;
        vector <int> pfact;
        for(int i=2;i*i<=z;i++)
        {
            if(z%i==0)
            {
                pfact.push_back(i);
                while(z%i==0)
                    z=z/i;
            }
        }
        if(z!=1)
            pfact.push_back(z);
            z=n;
        for(auto i:pfact)
            z=z-z/i;
        cout<<z<<endl;
    }
    return 0;
}
isko change karo
seive se etf calculate hoga
uske baad prefix-sum array bana lo
answer prefixsum hoga hamesha n ka