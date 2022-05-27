#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m;cin>>n>>m;
    
    string s,t;cin>>s>>t;

    vector<ll>fi,se;
    ll j = 0;
    ll k = n-1;
    
    for(ll i= 0;i<m;++i)
    {
        while(t[i]!=s[j] && j<n)
        ++j;

        while(t[m-1-i]!=s[k] && k>=0)
        --k;
        se.push_back(k);
        fi.push_back(j);
        ++j;
        --k;
    }
    reverse(se.begin(),se.end());
    ll e = 0;
    for(int i = 1;i<m;++i)
    {
        e = max(se[i]-fi[i-1],e);
    }
    cout<<e<<"\n";


    return 0;
}