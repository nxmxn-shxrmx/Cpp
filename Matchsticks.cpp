#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<int>v;
    vector<ll>sum;
    ll s = 0;
    sum.push_back(s);
    for(int i = 0;i<n;++i)
    {
        ll f; cin>>f;
        s+=f/2;
        sum.push_back(s);
        v.push_back(f);
    }
    int q;cin>>q;
    while(q--)
    {
        int l,r;cin>>l>>r;
        cout<<sum[r+1]-sum[l]<<"\n";
    }


    return 0;
}