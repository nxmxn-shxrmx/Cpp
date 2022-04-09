#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
bool check(ll d, vector<pair<ll,ll>>&v)
{
    for(int i = 0;i<v.size();++i)
    {
        if(d>=v[i].first)
        d+=v[i].second;
        else
        return false;
    }
    return true;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    
    while(t--)
    {
        vector<pair<ll,ll>>v;
        int t1;cin>>t1;
        while(t1--)
        {
            int n1;cin>>n1;
            ll m = INT_MIN;
            for(int i = 0;i<n1;++i)
            {
                ll f;cin>>f;
                m = max(m,f-i+1);
            }
        
            v.push_back({m,n1});
        }
        sort(begin(v),end(v));

        ll r =v[v.size()-1].first;
        ll l =v[0].first;
        

        while(l<r)
        {
            ll mid = (l+r)/2;
            if(check(mid,v))
            {
                r = mid;
            }
            else
            l = mid+1;
        }
        cout<<r<<"\n"; 
    }
    return 0;
}