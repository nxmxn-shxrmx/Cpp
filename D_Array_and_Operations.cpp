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
        ll n,k;
        cin>>n>>k;

        vector<ll>v;
        for(int i = 0;i<n;++i)
        {
            ll f;cin>>f;
            v.push_back(f);
        }
        sort(begin(v),end(v));
        ll s = 0;
        for(int i = 0;i<n-2*k;++i)
        s+=v[i];

        for(int i =0;i<k;++i)
        {
            s+= (v[n-2*k+i]/v[n-k+i]);
        }
        cout<<s<<"\n";
    }


    return 0;
}