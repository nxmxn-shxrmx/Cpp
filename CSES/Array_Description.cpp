#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<vector<int>>dp;
int sub(vector<int>&v,int i,int m)
{
    if(i==0)
    {
    
        for(int j =1;j<v.size()-1;++j)
        {
            if(abs(v[j]-v[j+1])>1)
                return 0;
        }
        return 1;
    }

     if(dp[i][v[i]]!=-1)
                return dp[i][v[i]];

    dp[i][m]=0;
    if(v[i]==0)
    {
        for(int j = 1;j<=m;++j)
        {
           v[i]=j;
           dp[i][m]+=sub(v,i-1,m);
           dp[i][j]%=mod;
            v[i]=0;
        }
    }
    else
    dp[i][m]=sub(v,i-1,m);
    return dp[i][m];
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    dp = vector<vector<int>>(n+1,vector<int>(m+1,-1));
    dp[0][0]=1;
    vector<int>v(n+1);
    for(int i =1;i<=n;++i)
    cin>>v[i];

    cout<<sub(v,n,m)<<"\n";
    
    

    return 0;
}