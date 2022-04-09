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
        ll n;cin>>n;
        vector<ll>v1;
        vector<ll>v2;
        multiset<ll>m;
        for(int i =0;i<n;++i)
        {
            ll f;cin>>f;
            v1.push_back(f);
            m.insert(v1[i]);
            
        }
    
        for(int i =0;i<n;++i)
        {
            ll f;cin>>f;
            v2.push_back(f);
            m.insert(v2[i]);

        }
        auto it = m.rbegin();
        ll k = *it;
        ++it;
        ll l = *it;
        cout<<k*l<<"\n";

    }

    return 0;
}