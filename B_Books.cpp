#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,t;
    cin>>n>>t;

    vector<ll>v;
    ll s= 0;

    for(int i =0;i<n;++i){

        ll f;cin>>f;
        v.push_back(f);

    }
    ll c=0;
    ll l =0;

    for(int i =0;i<n;++i){
          s+=v[i];
        if(s<=t)
        {
            c++;
        }
        else
        {
            s-=v[l];
            l++;
        }
    }
    cout<<c<<"\n";


    return 0;
}