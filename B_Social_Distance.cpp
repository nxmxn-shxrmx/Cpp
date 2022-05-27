#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        ll n,m;cin>>n>>m;
        vector<int>v;
        ll s = 0;
        ll x = INT_MAX;
        ll y =INT_MIN;

        for(int i = 0;i<n;++i)
        {
            ll f;cin>>f;
            s+=f;
            v.push_back(f);
            x = min(x,f);
            y = max(y,f);
        }
        if(s+n-x+y>m)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    
    }

    return 0;
}