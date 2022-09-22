#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;cin>>n;
    vector<ll>v;
    vector<ll>an;
    for(int i =0;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
        an.push_back(f);
    }
    reverse(v.begin(),v.end());
    reverse(an.begin(),an.end());
    bool k =0;
    int q;cin>>q;
    while(q--)
    {
        int p ;cin>>p;
        for(int i=n-1;~i;--i)
        {
            if(k)
            an[i]=v[i]+v[(p+i)%n];
            else
            v[i]=an[i]+an[(p+i)%n];
        }
        k^=1;
    }
    ll sum =0;
    if(k)
    for(auto c:v)
        sum = (sum%mod+c%mod)%mod;
    else
       for(auto c:an)
        sum = (sum%mod+c%mod)%mod;
    
    cout<<sum<<"\n";
    return 0;
}