# include <bits/stdc++.h>
using namespace std;
int main()
{
    const int size=8;
    int a[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
            a[i][j]=1;
    }
    cout<<"Welcome to Minesweeper \n";
    cout<<"How many mines?";
    int x;
    cin>>x;
    vector <pair <int,int>> coordinates;
    cout<<"Enter pairs: \n";
    for(int i=0;i<x;i++){
        cin>>coordinates[i].first>>coordinates[i].second;
        a[coordinates[i].first][coordinates[i].second]=2;
    }
    cout<<"Game started\n";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
           cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}