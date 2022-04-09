#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;cin>>n;
    ll x = 0,y = 0,z = 0;

    while(n--){

        ll a,b,c;
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0 && y==0 && z==0)
    cout<<"YES";

    else
    cout<<"NO";

    return 0;
}