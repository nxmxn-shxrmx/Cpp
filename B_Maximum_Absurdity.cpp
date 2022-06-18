#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;

    vector<ll>v;
    vector<pair<ll,ll>>d;
    priority_queue<pair<ll,ll>>sd;
    ll s = 0;
    for(int i =0;i<m;++i)
    {
        ll f;cin>>f;
        v.push_back(f);
        s+=f;
    }
    d.push_back({s,n});
    sd.push({s,n});
    for(int i=m;i<n;++i)
    {
        s-=v[i-m];
        ll f;cin>>f;
        s+=f;

        d.push_back({s,n+m-i-1});
        v.push_back(f);
        sd.push({s,n+m-i-1});
    }
    ll a =0;
    ll b =0;
    s = 0;
   
    
    for(int i = 0;i<d.size()-m;++i)
    {

        while(sd.size() && abs(sd.top().second-d[i].second)<m)
        {
          //  cout<<sd.top().second<<" "<<d[i].second<<"\n";
            sd.pop();
        }
        if(sd.size())
        {
            if(sd.top().first+d[i].first>s)
            {
                s=sd.top().first+d[i].first;
                a =i+1;
                b = n-sd.top().second+1;
            }
        }

    }

     cout<<a<<" "<<b<<"\n";

    return 0;
}