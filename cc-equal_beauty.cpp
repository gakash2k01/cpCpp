#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,a,n) for(int i=a; i<n; i++)
#define scan(a,n) for(int i=0; i<n; i++) cin>>a[i];
int MOD=1000000007;
int gcd(int a, int b){ while(b!=0){a=a%b;swap(a,b);}return a;}
int lcm(int a, int b){ return a/__gcd(a,b)*b; }
int binExp(int x,int n,int m=MOD) // x^n   O(logn)
{
	if(n==0){
		return 1;
	}
	if(n%2==0){
		return binExp(((x%m)*(x%m))%m,n/2,m);
	}
	return ((x%m)binExp(((x%m)(x%m))%m,(n-1)/2,m)%m)%m;
}
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) return mid;
        if (arr[mid] > x)return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}
void print(int ans)
{
    cout<<ans<<'\n';
}
int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t=1;
    cin>>t;
    for(int u=1; u<=t; u++)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> sol;
        loop(i,0,n)
        {
            cin>>a[i];
            sol[a[i]]++;
        }
        sort(a.begin(),a.end());
        int temp=1;
        for(auto y : sol) temp=max(temp,y.second);
        if(n==2 || temp>=n-1) cout<<0<<'\n';
        else if(n==3) cout<<min(a[1]-a[0],a[2]-a[1])<<'\n';
        else
        {
            int ans1=0,ans2=0;
            loop(i,0,n-1) ans1+=abs(a[i]-a[(n-1)/2]);
            loop(i,1,n) ans2+=abs(a[i]-a[1+(n-1)/2]);
            int m=min(ans1,ans2);
            int d2,d1;
            int l=1,r=n-2;
            while(r>l)
            {
                d2=a[n-1]-a[l];
                d1=a[r]-a[0];
                m=min(m,abs(d1-d2));
                if(d2>d1) l++;
                else r--;
            }
            cout<<m<<endl;
        }
    }
    return 0;
}