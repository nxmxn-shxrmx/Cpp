#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const ll N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll l,r;cin>>l>>r;
        vector<ll>v;
        ll c= 0;
        for(ll i=0;i<n;++i)
        {
            ll f;cin>>f;
            v.push_back(f);
            
        }
        sort(begin(v),end(v));
        for(int i = 0;i<n;++i)
        {
            auto it1 = lower_bound(v.begin()+i+1,v.end(),l-v[i]) ;
            auto it2 = upper_bound(v.begin()+i+1,v.end(),r-v[i]) ;
            c +=(it2-it1);
        }
        cout<<c<<"\n";
    

    }

    return 0;
}