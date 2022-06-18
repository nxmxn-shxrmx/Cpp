#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)
const int N = 1e6 + 100;

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

    int n;cin>>n;
    vector<ll>v1,v2;
    ll c = N;
    for(int i = 0;i<n;++i)
    {
        ll x,y;cin>>x>>y;
        if(x==1)
        v1.push_back(y);
        else 
        v2.push_back(y);

    
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for(ll i = 0;i<=v1.size();++i)
    {   
        for(ll j = 0;j<=v2.size();++j)
        {
            ll s = 0;
            for(int h = 0;h<v1.size()-i;++h)
            s+=v1[h];

            for(int h = 0;h<v2.size()-j;++h)
            s+=v2[h];
            
            if(i+2*j>=s)
            c = min(c,i+2*j);
        }
        cout<<"\n";

    }
    cout<<c<<"\n";
    


    return 0;
}