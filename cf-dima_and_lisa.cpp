#include <bits/stdc++.h>
#define int long long
using namespace std;
const int lim=1e5+1;
int p[lim];
vector<int> primes;
void pre()
{
    for(int i=0;i<lim;i++)
        p[i]=1;
    p[0]=0;
    p[1]=0;
    for(int i=2;i*i<lim;i++)
    {
        if(p[i]==1)
        {
            for(int j=i*i;j<lim;j+=i)
                p[j]=0;
        }
    }
    for(int i=2;i<lim;i++)
        if(p[i]==1)
        {
            //cout<<i<<endl;
            primes.push_back(i);
        }
}
int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    pre();
    int a=-1;
    int n;
    cin>>n;
    if(n==3)
    {
        cout<<"1\n3";
        return 0;
    }
    for(int i=max(n-300,3ll);i<=n;i++)
    {
        for(auto it:primes)
        {
            if(i==2)
                continue;
            if(i%it==0 && it!=i)
            {
                a=i;
                break;
            }
            if(it*it>n)
                break;
        }
        if(a==-1)
        {
            a=i;
            break;
        }
        a=-1;
    }
    if(a==-1)
    {
        cout<<"1\n"<<n;
        return 0;
    }
    //cout<<"Got "<<a<<endl;
    n-=a;
    //cout<<"N = "<<n<<endl;
    if(n==2)
    {
        cout<<"2\n"<<a<<" "<<2;
        return 0;
    }
    for(auto i:primes)
    {
        for(auto j:primes)
        {
            //cout<<"Testing "<<i<<" "<<j<<endl;
            if(i+j==n)
            {
                cout<<3<<"\n"<<a<<" "<<i<<" "<<j;
                return 0;
            }
            if(i+j>n)
                break;
        }
    }
    return 0;
}