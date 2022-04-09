#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;cin>>n;

    ll f = n[0]-'0'+1;

    ll g = int(pow(10,(n.size()-1))+0.25);
    cout<<f*g;



    return 0;
}