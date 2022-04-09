#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<ll>f;
    ll s = 6;
    int i = 4;
    while(s<=pow(10,12)+0.25)
    {
        f.push_back(s);
        s*=i;
        ++i;
    }
    vector<pair<ll,ll>>v;

    for(int i = 0;i<(1<<f.size());++i)
    {
        ll k = 0;
        ll s = 0;
        for(int j = 0;j<f.size();++j)
        {
            if(i&(1<<j) )
            s+=f[j],k++;
        }
        v.push_back({s,k});
    }
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll k =INT_MAX;
        for(int i =0;i<v.size();++i)
        {
            if(v[i].first>n)
            break;
            ll o =__builtin_popcountll(n-v[i].first);
        
            k = min(k,o+v[i].second);

        }
        cout<<k<<"\n";
        
    }
    

    return 0;
}