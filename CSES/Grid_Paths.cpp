#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<vector<int>>dp;
int sub(int i,int j,vector<string>&v)
{

     if(i<0 || j<0)
    return 0;
    
    if(v[i][j]=='*')
    return dp[i][j]=0;

    if(i==0 && j==0)
    return 1;

   
    if(dp[i][j]!=-1)
    return dp[i][j]%mod;

    return dp[i][j]=(sub(i-1,j,v)%mod+sub(i,j-1,v)%mod)%mod;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;cin>>n;
    vector<string>v;
    dp = vector<vector<int>>(n+1,vector<int>(n+1,-1));
    dp[0][0]=1;
    for(int i = 0;i<n;++i)
    {
        string s;cin>>s;
        v.push_back(s);
    }

    cout<<sub(n-1,n-1,v);
    

    return 0;
}