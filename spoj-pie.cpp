#include <bits/stdc++.h>
#define int long long
using namespace std;
const double del=1e-5;
int n,f;
const double pie=3.14159265358979323846;
long double a[10001],maxn;
bool check(double m)
{
    int cnt=0;
    for(int i=0;i<n;i++)
        cnt+=(int)((a[i]*a[i]*pie)/m);
    if(cnt>=f)
        return true;
    return false;
}
void solve()
{
    //write ur code here
    cin>>n>>f;
    f++;
    //cout<<"Start\n";
    maxn=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxn=(max(maxn,a[i]));
    }
    //cout<<"Start\n";
    double l=0.0,r=maxn*maxn*pie,mid,ans=0.0;
    while(r-l>del)
    {
        mid=l+(r-l)/2;
        //cout<<mid<<" "<<l<<" "<<r<<endl;
        if(check(mid))
        {
            
            ans=mid;
            l=mid;
        }
        else{
            r=mid;
            //cout<<"In 1\n";
        }
    }
    //ans=(int)ans;
    //cout<<"Start\n";
    printf("%.4lf\n",ans);
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