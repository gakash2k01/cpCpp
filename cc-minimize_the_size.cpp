#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    //write ur code here
    int n;
    cin>>n;
    int cnt=1,cb=1;
    vector <int> a;
    int i=0;
    int temp1=1;
    for(i=0;;i++)
    {
        temp1=temp1<<1;
        if(temp1 > n)
            break;
    }
    //cout<<"Got i as "<<i+1<<endl;
    a.push_back(temp1-1);
    //int temp1=temp;
    //cout<<"Temp = "<<temp<<" Temp1 = "<<temp1<<endl;
    while(i>=0)
    {
        //cout<<"The bit is "<<((n>>i)%2)<<" and current bit is "<<cb<<endl;
        temp1=temp1>>1;
        if((n/temp1)%2!=cb)
        {
            //cout<<"Enter\n";
            cb=(cb+1)%2;
            a.push_back((temp1<<1)-1);
            cnt++;  
        }
        i--;
    }
    cout<<cnt<<"\n";
    for(auto it:a)
        cout<<it<<" ";
    cout<<"\n";
    //cout<<"\n";
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