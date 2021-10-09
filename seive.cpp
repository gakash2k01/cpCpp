#include <bits/stdc++.h>
#define int long long
using namespace std;
const int n=20;
int32_t main()
{
    int a[n];
    a[0]=0;
    a[1]=0;
    for(int i=2;i<n;i++)
        a[i]=1;
    for(int i=2;i*i<n;i++)
    {
        for(int j=i*i;j<n;j+=i)
            a[j]=0;
    }
    cout<<"The factors are: ";
    for(int i=0;i<n;i++)
        if(a[i]==1)
            cout<<i<<" ";
    return 0;
}