#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while(t--){
        ll n;cin>>n;
        vector<ll>v;
        map<ll,ll>m;
        ll z =0;
        ll d =INT_MAX;
        for(int i =0;i<n;++i){
            ll f;cin>>f;
            v.push_back(f);
            m[f]++;
            d = min(d,f);
            if(f==0)
            z++;
        }
        if(z>0)
        cout<<n-z<<"\n";

        else
        {
            cout<<(n*d)+(n-m[d])<<"\n";
        }

    }



    return 0;
}