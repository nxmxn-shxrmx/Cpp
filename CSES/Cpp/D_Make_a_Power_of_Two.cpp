#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)


ll check(ll n,ll m){

    string x = to_string(n);
    string y = to_string(m);

    int ans=0;
    for(int i=0,j=0;i<x.size() and j<y.size();++i){
        if(x[i]==y[j]){
            ans++;
            j++;
        }
    
    }
    int l = x.size()+y.size()-2*ans;
    return l;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;


    while(t--){
        ll n;cin>>n;
        ll ans = LLONG_MAX;

    for(ll i=1;i<1e18;i*=2){
        ans = min(ans,check(n,i));
    }
    cout<<ans<<"\n";
    }
    

    return 0;
}