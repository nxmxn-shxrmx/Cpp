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
        ll n;cin>>n;
        vector<ll>sec(n);
        vector<ll>hp(n);
        vector<pair<ll,ll>>v;
        ll s =0;
        for(int i = 0;i<n;++i)
        cin>>sec[i];

        for(int i = 0;i<n;++i)
        {
            cin>>hp[i];
            v.push_back({sec[i]-hp[i],sec[i]});
        }
        sort(begin(v),end(v));
        ll l = -1,r=-1;
        for(int i = 0;i<n;++i)
        {//2 3 3 4
            if(v[i].first>=r)
            {
                s+= (r - l)*(r - l+1)/2;
                r = v[i].second;
                l = v[i].first;
            }
            else
            r = max(r,v[i].second);
        }
        s+= (r - l + 1)*(r - l)/2;
        cout<<s<<"\n";
    }

    return 0;
}