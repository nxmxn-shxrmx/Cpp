#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)
const int N = 1e6 +7;

long long fact[N];
ll le[N],ri[N],po[N];
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

    string s1,s2;
    cin>>s1>>s2;
    po[0]=1;
    ll div = 0;
    ll p =1;
    for(auto c:s2)
    {
        div = (div%mod + (p*(c-'a'+1)%mod))%mod;
        p = (p*31)%mod;
    }
    le[1] = s1[0]-'a'+1;
    po[1]=1;
    p = 31;
    for(int i = 2;i<=s1.size();++i)
    {
        le[i] =(le[i-1]%mod + (p*(s1[i-1]-'a'+1))%mod)%mod;
        po[i] = p;
        p = (p*31)%mod;
    }
    for(int i = s2.size();i<s1.size();++i)
    {
        ll k = ((le[i]- le[i-s2.size()]%mod) + mod)%mod;
       // cout<<le[i-s2.size()]<<" "<<i<<" "<<s2.size()<<"\n";
       // cout<<k<<"\n";
        ll h = (div*po[i-s2.size()])%mod;
        if(k==h)
        cout<<i<<"\n";
    }
    



    return 0;
}