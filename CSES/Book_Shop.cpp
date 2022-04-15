#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<vector<int>>dp;
// ll sub(vector<ll>&v,vector<ll>&p,int i,int x)
// {

//     if(i==v.size())
//     return 0;

//     if(dp[i][x]!=-1)
//     return dp[i][x];

//     if(x-v[i]>=0)
//     dp[i][x]=sub(v,p,i+1,x-v[i])+p[i];

//     return dp[i][x]=max(sub(v,p,i+1,x),dp[i][x]);
// }

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,x;cin>>n>>x;
    vector<ll>v(n+1);
    dp = vector<vector<int>>(n+1,vector<int>(x+1,0));
    dp[0][0]=0;
    
    for(int i =1;i<=n;++i)
    cin>>v[i];
    vector<ll>p(n+1);
    for(int i = 1;i<=n;++i)
    cin>>p[i];

    for(int i =1;i<=n;++i)
    {
        for(int j = 0;j<=x;++j)
        {
            if(j-v[i]>=0)
            dp[i][j] = dp[i-1][j-v[i]]+p[i];

            dp[i][j] =max(dp[i][j],dp[i-1][j]);

        }
    }
    cout<<dp[n][x]<<"\n";


    return 0;
}