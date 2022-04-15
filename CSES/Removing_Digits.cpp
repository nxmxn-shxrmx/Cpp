#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<ll>dp;

// ll sub(ll n)
// {
//     if(n==0)
//     return 0;

//     if(dp[n])
//     return dp[n];
//      dp[n] = INT_MAX;
//     ll v = n;
//     while(v!=0)
//     {
//         ll x = v%10;
//         if(n-x==n)
//         {
//             v/=10;
//             continue;
//         }
//         dp[n] = min(sub(n-x)+1,dp[n]);
//         v/=10;
//     }
//     return dp[n];
// }

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;cin>>n;
    dp = vector<ll>(n+1,0);
    dp[0]=0;
    for(int i =1;i<=n;++i)
    {
        ll k = i;
        dp[i]=INT_MAX;
        while(k)
        {
            ll o = k%10;
            if(k%10==0)
            {
                k/=10;
                continue;
            }
            if(i-o>=0)
            dp[i] = min(dp[i],dp[i-o]+1);
            k/=10;
        }
    }

    cout<<dp[n]<<"\n";
  //  cout<<sub(n)<<"\n";

    return 0;
}