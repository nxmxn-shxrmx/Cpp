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
        vector<ll>v,c;
    ll a,b,r,d;
        a=b=r=d=INT_MAX;
        for(int i = 0;i<n;++i)
        {
            ll f;cin>>f;
            v.push_back(f);
        }
        for(int i = 0;i<n;++i)
        {
            ll f;cin>>f;
            c.push_back(f);
            a = min(abs(v[0]-c[i]),a);
            b = min(abs(v[n-1]-c[i]),b);
        }
        for(int i = 0;i<n;++i)
        {
            r = min(abs(c[0]-v[i]),r);
            d = min(abs(c[n-1]-v[i]),d);
        }

        ll o = min(abs(v[0]-c[0]),a+r)+min(abs(v[n-1]-c[n-1]),b+d);
        o =min(o, min(abs(v[0]-c[n-1]),a+d)+min(abs(v[n-1]-c[0]),b+r));
        cout<<o<<"\n";
    }



    return 0;
}