#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

ll c= 0;
int dp[101][2];
int d;

int recur(int n,int k,int h)
{
    if(k<0)
    return 0;
    
    if(k==0)
        return h;
    

    if(dp[k][h]!=-1)
        return dp[k][h];
    
    ll ans =0;
    for(int i = 0;i<n;++i)
    {
        if(d<=i+1)
        ans+=recur(n,k-i-1,1);

        else
        ans+=recur(n,k-i-1,h);
        
        ans%=mod;
    }
    return dp[k][h]=ans;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n>>k>>d;
    memset(dp,-1,sizeof(dp));

    cout<<recur(k,n,0)<<"\n";
//     for(int i =0;i<=n;++i)
//     {
//         cout<<dp[i][0]<<" ";
//     }

// cout<<"\n";
// for(int i =0;i<=n;++i)
//     {
//         cout<<dp[i][1]<<" ";
//     }
    return 0;
}