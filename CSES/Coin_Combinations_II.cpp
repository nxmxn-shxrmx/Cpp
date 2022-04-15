#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,x;cin>>n>>x;
    vector<ll>v(n);
    for(int i = 0;i<n;++i)
    cin>>v[i];
    vector<ll>co(x+1,0);
    co[0]=1;

    for(int i = 0;i<n;++i)
    {
        for(int j = 1;j<=x;++j)
        {
            if(j-v[i]>=0)
                co[j]+=co[j-v[i]];
            co[j]%=mod;
        }
    }
    cout<<co[x]<<"\n";

    return 0;
}

