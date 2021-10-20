#include <bits/stdc++.h>
#define int long long
using namespace std;
int dist_calc(int x,int y, int v[4])
{
    int x_dist=0,y_dist=0;
    if(x<v[2] && x>v[0])
        x_dist=0;
    else
        x_dist=min(abs(v[0]-x),abs(v[2]-x));
    if(y<v[3] && y>v[1])
        y_dist=0;
    else
        y_dist=min(abs(v[1]-y),abs(v[3]-y));
    return x_dist+y_dist;
}
void solve()
{
    //write ur code here
    int k,min_x=1000,max_x=-1000, min_y=1000,max_y=-1000,x_val,y_val,d_val=100000000000;
    cin>>k;
    int a[k][4];
    for(int i=0;i<k;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
        min_x=min(min_x,a[i][0]);
        min_y=min(min_y,a[i][1]);
        max_y=max(max_y,a[i][3]);
        max_x=max(max_x,a[i][2]);
    }
    //cout<<"Got "<<min_x<<" "<<min_y<<" "<<max_x<<" "<<max_y<<endl;
    for(int i=min_x;i<=max_x;i++)
    {
        //cout<<"Entered 1"<<endl;
        for(int j=min_y;j<=max_y;j++)
        {
            //cout<<"Entered 2"<<endl;
            int d=0;
            for(int l=0;l<k;l++)
            {
                d+=dist_calc(i,j,&a[l][0]);
                //cout<<"Got dist "<<d<<" for "<<i<<" "<<j<<endl;
            }
            if(d<d_val)
            {
                x_val=i,y_val=j,d_val=d;
                //cout<<"Got "<<d_val<<" for "<<x_val<<" "<<y_val<<endl;
            }
        }
    }
    cout<<x_val<<" "<<y_val<<"\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t1=1;
    cin>>t1;
    for(int i=1;i<=t1;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}