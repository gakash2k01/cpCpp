#include <bits/stdc++.h>
#define int long long
using namespace std;
void divisible(int n)
{
    int cnt=0,cnt1=0;
    if (n % 25 == 0)
    {
        cout<<0<<"\n";
        return;
    }
    int t=n;
    while(t>24 && t%10!=0)
    {
        cnt++;
        t/=10;
    }
    int temp=t%10;
    while(t>24 && t%25!=0)
    {
        cnt++;
        t=(t/100)*10+temp;
    }
    while(n>24 && n%10!=5)
    {
        cnt1++;
        n/=10;
    }
    temp=n%10;
    while(n>24 && n%25!=0)
    {
        cnt1++;
        n=(n/100)*10+temp;
    }
    cout<<min(cnt,cnt1)<<"\n";
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
        int num;
        cin>>num;
        divisible(num);
    }
    return 0;
}