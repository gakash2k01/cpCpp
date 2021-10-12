#include <bits/stdc++.h>
#define int long long
using namespace std;
const int n=20;
int32_t main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
        cin>>nums[i];
    int rot=0,f=1,l=n-1,mid=0;
    if(nums[0]>nums[n-1])
    {
        while(f<=l)
        {
            mid=(f+l)/2;
            if(nums[mid-1]>nums[mid])
                break;
            else if(nums[mid]>nums[0])
                f=mid+1;
            else
                l=mid-1;
        }
    } // This works in O(log N)
    cout<<nums[mid]<<endl;
    return 0;
}