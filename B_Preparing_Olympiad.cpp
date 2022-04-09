#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,l,r,d;
    cin>>n>>l>>r>>d;

    vector<ll>v;
    ll c = 0;
    for(ll i = 0;i<n;++i)
    {
        ll f;cin>>f;
        v.push_back(f);
    }
    for(ll i = 0;i<(1<<n);++i)
    {
       ll k = 0;
       multiset<ll>s;
        for(int j = 0;j<n;++j)
        {
            if(i&(1<<j))
            {
                s.insert(v[j]);
                k+=v[j];
            }
        }
        if(s.size()>=2)
        {
            auto it = s.end();
            --it;
            ll o = *it;
            ll u = *s.begin();
            if(k>=l && k<=r && (o-u)>=d)
            {
                c++;
            }
        }
    }
    cout<<c<<"\n";


    return 0;
}