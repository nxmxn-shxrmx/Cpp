#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<ll,ll>v;
   int t;cin>>t;

    while(t--){
        ll n;cin>>n;

        ll s = (int)pow(2,(int)log2(n));
        ll d = s/2;
        cout<<max(d,(n-s+1))<<"\n";

    }
  return 0;
}