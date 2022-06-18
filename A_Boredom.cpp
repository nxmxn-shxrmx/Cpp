#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<ll>v;
    map<ll,ll>m;
    for(int i = 0;i<n;++i)
    {
        ll f;cin>>f;
        v.push_back(f);
        m[f]++;
    }
    sort(v.begin(),v.end());
    ll o = 0;
    vector<ll>dp(m.size()+1,0);
    dp[0]=0;
    ll i =1;
    for(auto c:m)
    {
        if(m[c.first-1]==0)
        o += c.second*c.first;
        else
        {
            o = max(o,dp[i-2]+c.first*c.second);
        }
        dp[i++]=o;
    }
    cout<<o<<"\n";
    return 0;
}