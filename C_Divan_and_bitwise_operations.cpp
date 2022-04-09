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
        ll n,u;
        cin>>n>>u;
        ll o = 0;
        while(u--)
        {
            ll l,r,p;
            cin>>l>>r>>p;
            o |= p;
        }
        ll an=1;
        ll w = 2;
        n--;
        while(n)
        {
            if(n&1)
            an=(w*an)%mod;
            w = w*w%mod;
            n>>=1;
        }
        an = (o*an)%mod;
        cout<<an<<"\n";

    }

    return 0;
}