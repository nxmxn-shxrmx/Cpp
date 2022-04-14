#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,x;cin>>n>>x;

    vector<ll>v;
    for(int i = 0;i<n;++i)
    {
        ll f;cin>>f;
        v.push_back(f);
    }
    vector<ll>p(x+1);
    p[0]=0;
    for(ll i = 1;i<=x;++i)
    {
        p[i]=INT_MAX;
        for(auto c:v)
        {
            if(i-c>=0)
            p[i] = min(p[i],p[i-c]+1);
        }
    }

    if(p[x]==INT_MAX)
    cout<<-1<<"\n";

    else
    cout<<p[x]<<"\n";

    return 0;
}