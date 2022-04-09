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
    vector<ll>v(t,0);
    bitset<30> x[t];

    for(int i =0;i<t;++i)
    {
        ll n;cin>>n;
        ll mask = 0;
        for(int j = 0;j<n;++j)
        {
            ll k;cin>>k;
            mask = mask | (1<<k);
        }
        v[i] = mask;
        x[i] = mask;
    }
    // for(int i = 0;i<t;i++)
    // {
    //     for(int j = 31;j>=0;--j)
    //     {
    //         if(v[i]&(1<<j))
    //         cout<<1<<" ";
    //         else
    //         cout<<"0"<<" ";
    //     }
    //     cout<<"\n";
    // }

    ll total = LONG_MIN;

    for(int i =0;i<t;++i)
    {
        for(int j = i+1;j<t;++j)
        {
            ll intersection = (v[i]&v[j]);
            ll common_day = __builtin_popcount(intersection);
            cout<<(x[i]&x[j]).count()<<"\n";
            cout<<i+1<<" "<<j+1<<" "<<common_day<<"\n"; 
        }
    }

    return 0;
}