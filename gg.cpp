#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define mod (ll)(1e9 +7)
 
const int N =1e5+10;
 
 
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    ll n,x;cin>>n>>x;
 
    vector<ll>v(n+1);
    vector<vector<ll>>dp(n+1,vector<ll>(x+1,0));
    for(int i = 1;i<=n;++i)
    cin>>v[i];
 
    dp[0][0]=1;
 
    for(ll j = 0;j<=x;++j)
    {
        for(ll i =1;i<n+1;++i)
        {
            if(j-v[i]>=0)
                dp[i][j]+=dp[i][j-v[i]]+dp[i-1][j];
            else
             dp[i][j]+=dp[i-1][j];
            dp[i][j]%=mod;
        }
    }
 
    
    cout<<dp[n][x];
 
 
 
    
 
    return 0;
}