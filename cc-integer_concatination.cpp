#include <bits/stdc++.h>
#define int long long
using namespace std;
int concat(int a, int b)
{
 
    // Convert both the integers to string
    string s1 = to_string(a);
    string s2 = to_string(b);
 
    // Concatenate both strings
    string s = s1 + s2;
 
    // Convert the concatenated string
    // to integer
    int c = stoll(s,nullptr,10);
 
    // return the formed integer
    return c;
}
void solve()
{
    //write ur code here
    int n,l,r,cnt=0;
    cin>>n>>l>>r;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>=r)
            break;
        int f=0, l=n-1, mid=-1;
        bool found=false;
        int temp;
        while(f<=l)
        {
            mid=(f+l)/2;
            if(concat(a[mid],a[i])>=l && (mid==0 || concat(a[mid-1],a[i])<l))
            {
                cout<<"Found "<<concat(a[mid],a[i])<<endl;
                found=true;
                break;
            }
            else if(concat(a[mid],a[i])<l)
                f=mid+1;
            else
                l=mid-1;
        }
        if(!found)
            continue;
        temp=mid;
        f=0, l=n-1, mid=-1;
        found=false;
        while(f<=l)
        {
            mid=(f+l)/2;
            if(concat(a[mid],a[i])<=r && (mid==n-1 || concat(a[mid+1],a[i])>r))
            {
                cout<<"Foundr "<<concat(a[mid],a[i])<<endl;
                found=true;
                break;
            }
            else if(concat(a[mid],a[i])>r)
                l=mid-1;
            else
                f=mid+1;
        }
        cnt+=(mid-temp+1);
    }
    cout<<cnt<<endl;
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
doesn't work