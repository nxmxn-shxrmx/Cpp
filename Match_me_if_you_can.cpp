#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)
const int N = 1e6 + 10;
ll le[N];
long long fact[N];
void initfact() {
    fact[0] = 1;
    for(int i = 1; i < N; i++) {
        fact[i] = (fact[i-1] * i);
        fact[i] %= mod;
    }
}
ll bioexpo(ll a,ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
            res = (res*a)%mod;

        a = (a*a)%mod;
            b>>=1;
    }
    return res;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    return 0;
}