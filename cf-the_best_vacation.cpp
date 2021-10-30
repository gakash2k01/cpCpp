#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n,k;
    cin>>n>>k;
    int a[2*n];
    int pre1[2*n+1];
    int pre2[2*n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[n+i]=a[i];
    }
    pre1[0]=0;
    pre2[0]=0;
    for(int i=1;i<=2*n;i++)
    {
        pre1[i]=pre1[i-1]+(a[i]*(a[i]+1))/2;
        pre2[i]=pre2[i-1]+a[i];
    }
    int mx=0;
    int j=n-1;
    while(pre2[j+1]>=k)
    {
        //check for j
        int l=0,r=j,mid,ind,temp,ans;
        while(l<=r)
        {
            //pre1[j]-pre[mid]>=k;
            if(pre2[mid]<=(pre2[j+1]-k))
            {
                ind=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        ans=pre1[j+1]-pre1[ind];
        temp=pre2[j+1]-pre2[mid]-k;
        ans-=(temp*(temp+1))/2;
        mx=max(mx,ans);
        //store in max the max of the two
        j--;
    }
    cout<<mx<<endl;
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