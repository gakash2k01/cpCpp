#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int l=0,r=n-1;
    int minl=100000000000000,maxl=0,defl=0;
    int minr=100000000000000,maxr=0,defr=0;
    while(1<r-l)
    {
        if(defl<=defr)
        {
            l++;
            minl=min(minl,a[l]);
            maxl=max(maxl,a[l]);
            defl=maxl-minl;
        }
        else
        {
            r--;
            minr=min(minr,a[r]);
            maxr=max(maxr,a[r]);
            defr=maxr-minr;
        }
    }
    if(defl<defr)
        {
            l++;
            minl=min(minl,a[l]);
            maxl=max(maxl,a[l]);
            defl=maxl-minl;
        }
    else if(defl>defr)
        {
            r--;
            minr=min(minr,a[r]);
            maxr=max(maxr,a[r]);
            defr=maxr-minr;
        }
    else
    {
        if(a[l+1]<=maxl && a[l+1]>=minl)
        {
            l++;
            minl=min(minl,a[l]);
            maxl=max(maxl,a[l]);
            defl=maxl-minl;
        }
        else
        {
            r--;
            minr=min(minr,a[r]);
            maxr=max(maxr,a[r]);
            defr=maxr-minr;
        }
    }
    cout<<abs(defl-defr)<<"\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t1=1;
    cin>>t1;
    while(t1--)
    {
        solve();
    }
    return 0;
}