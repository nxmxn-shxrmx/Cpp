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

        ll l,r;
        cin>>l>>r;
        ll g = 0;
        for(ll i =l;i<=r;++i){

            ll d = 0;
            ll ff = i;
            while(ff){
                ll h = ff%10;
                d+=h;
                ff/=10;
            }
            if(d%3==0)
            g++;
        }
        cout<<g<<"\n";
    }
    //
//998244353 1000000007
//27182818284 31415926535897

//
//585218
//10462914572538




    return 0;
}