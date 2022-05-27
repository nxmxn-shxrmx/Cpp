#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<vector<int>>h;


void dfs(int r,vector<vector<int>>&v,vector<int>&q)
{
    if(v[r].size()==0)
    {
        q.push_back(r);
        h.push_back(q);
        return;
    }
    q.push_back(r);
    dfs(v[r][0],v,q);
    for(int i = 1;i<v[r].size();++i)
    {
        vector<int>w;
        dfs(v[r][i],v,w);
    }
}
int main(){

    ios_base::sync_with_stdio(0);
    
    cin.tie(0);
    
    cout.tie(0);

    int t;cin>>t;

    while (t--)
    {
        int n;cin>>n;
        int r = 0;
        h.clear();
        vector<vector<int>>v(n+1);
        for(int i = 1;i<=n;++i)
        {
            int f;cin>>f;
            if(i!=f)
            v[f].push_back(i);
            if(i==f)
            r = f;
        }
        vector<int>q;
      
        dfs(r,v,q);

        cout<<h.size()<<" \n";
        for(auto c:h)
        {
            cout<<c.size()<<"\n";
            for(auto x:c)
            cout<<x<<" ";
            cout<<"\n";
        }
        cout<<"\n";

    }
    

    return 0;
}