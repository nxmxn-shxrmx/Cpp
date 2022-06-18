#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
ll modulo(ll h,ll mo)
{
    ll r=1;
    while(mo>0)
    {
        if(mo&1)
        r = (r*h)%mod;

        h = (h*h)%mod;

        mo>>=1;
    }
    return r;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b,n;
    cin>>a>>b>>n;
    if(n==1)
    {
        cout<<2<<"\n";
        return 0;
    }
    vector<ll>dp(n+1);
    dp[0]=1;
    for(int i = 1;i<=n;++i)
        dp[i] = (i*dp[i-1])%mod;

    map<ll,ll>m;
    m[a]=n;
    m[b]=0;
    ll ans = 0;
    for(int i = 0;i<=n;++i)
    {
        ll k = (m[a]*a+m[b]*b)%mod;

        while(k){

            if(k%10!=a && k%10!=b)
                break;

            k/=10;
        }
        if(k==0)
        {
            ll h = (dp[m[a]]%mod * dp[m[b]]%mod)%mod;

            h = modulo(h,mod-2);
           // cout<<h<<"\n";
         //(a / b) mod p = ((a mod p) * (b^(-1) mod p)) mod p
         ans =(ans%mod +((dp[n]%mod)*(h%mod))%mod)%mod;
         }
        m[a]--;
        m[b]++;
    }
    cout<<ans<<"\n";

    return 0;
}