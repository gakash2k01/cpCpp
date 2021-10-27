#include<bits/stdc++.h>
using namespace std;
#define int long long 
bool check(vector<int> &books, int lim, int k)
{
    int cnt = 1;
    int curr = 0;
    for(auto page: books)
    {
        if(page > lim)
            return false;
        if(curr + page > lim)
        {
            cnt++;
            curr = page;
        }
        else
            curr += page;
    }
    return cnt <= k;
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
        int n,k;
        cin>>n>>k;
        vector <int> a(n);
        int s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        int lo = 1, hi = s, mid, res = 1;
        while(lo <= hi)
        {
            mid = (lo + hi)/2;
            if(check(a, mid, k))
            {
                res = mid;
                hi = mid-1;
            }
            else
                lo = mid+1;
        }
        s = 0;
        vector<bool> isEnd(n, false);
        int used = 1;
        for(int i=n-1; i>=0; i--)
        {
            if(s + a[i] > res || i == k - used - 1)
            {
                isEnd[i] = true;
                used++;
                s = a[i];
            }
            else
                s += a[i];
        }
        for(int i=0; i<n; i++)
        {
            cout << a[i] <<" ";
            if(isEnd[i])
                cout <<"/ ";
        }       
        cout<<"\n";
    }
}