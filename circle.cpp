#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;++i)
    {
        int x,y,r;
        cin>>x>>y>>r;
        v.push_back({x,y,r});
    }
    set<pair<int,int>>s;
    map<int,set<int>>g;
    for(int i =0;i<n;++i)
    {
        for(int j =i+1;j<n;++j)
        {
            ll x = (v[i][0]-v[j][0])*(v[i][0]-v[j][0]);
            ll y =(v[i][1]-v[j][1])*(v[i][1]-v[j][1]);

            double u = sqrt(x+y);
            ll r=v[i][2]+v[j][2];
            if(u-r<=0)
            {
            
                g[i].insert(j);
                g[j].insert(i);
            }
        }
    }
    int c=0;
    for(auto c:g)
            s.insert({-c.second.size(),c.first});



    while((*s.begin()).first!=0)
    {
        int i = (*s.begin()).second;
        for(auto c:g[i])
        {
            s.erase({-g[c].size(),c});
            g[c].erase(i);
            s.insert({-g[c].size(),c});
        }
        s.erase(*s.begin());
        c++;
    }

cout<<c<<"\n";
    return 0;
}