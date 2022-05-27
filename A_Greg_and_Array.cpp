#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,k;cin>>n>>m>>k;
    vector<ll>v;
    for(int i = 0;i<n;++i)
    {
        ll f;cin>>f;
        v.push_back(f);
    }
    vector<vector<ll>>ma;
    for(int i = 0;i<m;++i)
    {
        ll l,r,d;
        cin>>l>>r>>d;
        ma.push_back({l-1,r-1,d});
    }
  
    vector<ll>mv(m+1);
    for(int i  = 0;i<k;++i)
    {
        int x,y;cin>>x>>y;
        mv[x-1]++;
        mv[y]--;
    }

     for(int i =1;i<m;++i)
    mv[i]+=mv[i-1];

    vector<ll>b(n+1);
    for(int i = 0;i<m;++i)
    {
        b[ma[i][0]]+=ma[i][2]*mv[i];
        b[ma[i][1]+1]-=ma[i][2]*mv[i];
    }
    for(int i=1;i<n;++i)
    b[i]+=b[i-1];
    for(int i = 0;i<n;++i)
    cout<<v[i]+b[i]<<" ";
    return 0;
}