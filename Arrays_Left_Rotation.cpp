#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b;
    cin>>a>>b;

    vector<ll>v;

    for(ll i = 0;i<a;++i){
        ll s;cin>>s;
        v.push_back(s);
        if(i>=b){
            cout<<v[i]<<" ";
        }
    }
    for(int i = 0;i<b;++i){

        cout<<v[i]<<" ";
    }

    return 0;
}