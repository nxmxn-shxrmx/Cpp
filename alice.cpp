#include<bits/stdc++.h>
using namespace std;

#define ll long long
long long dp[2001][3];
long long f(int i,int n,int ax,int ay,int bx,int by,vector<vector<int>>arr,int p)
{
    if(i==n)
    return 0;

    if(dp[i][p]!=-1)
        return dp[i][p];

    dp[i][p]=min((f(i+1,n,arr[i][0],arr[i][1],bx,by,arr,0)+abs(arr[i][0]-ax)+abs(arr[i][1]-ay),f(i+1,n,ax,bx,arr[i][0],arr[i][1],arr,1)+abs(arr[i][0]-ax)+abs(arr[i][1]);
}
long long appleDistances(int n,int ax,int ay,int bx,int by,vector<vector<int>>arr)
{

    memset(dp,-1,sizeof(dp));

    return f(0,n,ax,ay,bx,by,arr,2);
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while(t--)
    {

    int n;cin>>n;
    int ax,ay,bx,by;cin>>ax>>ay>>bx>>by;
    vector<vector<int>>v;
    for(int i = 0;i<n;++i)
    {
        int f,g;cin>>f>>g;
        v.push_back({f,g});
    }
    
    cout<<appleDistances(n,ax,ay,bx,by,v)<<"\n";
    }

    return 0;
}