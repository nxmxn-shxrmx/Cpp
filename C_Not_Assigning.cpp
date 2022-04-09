#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<vector<pair<int,int>>>v;
vector<int>w;
vector<bool>vi;
void dfs(int u ,bool g)
{
    vi[u]=true;
    for(auto c:v[u])
    {
        if(vi[c.first])
        continue;

        if(g)
        w[c.second]=2;
        else
        w[c.second]=3;
        dfs(c.first,!g);
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
        v =vector<vector<pair<int,int>>>(n+1);
        w = vector<int>(n-1);
        vi = vector<bool>(n+1);

        for(int i = 0;i<n-1;++i)
        {
            int f,g;
            cin>>f>>g;
            v[f].push_back({g,i});
            v[g].push_back({f,i});
        }
        int g = 0;
        int f = 0;
        for(int i = 0;i<n+1;++i)
        {
            if(v[i].size()>2)
            {
                g=1;
                break;
            }
            if(v[i].size()==1)
            f = i;
        }
        if(g)
        cout<<-1<<"\n";
        else
        {
            dfs(f,0);
            for(auto c:w)
            cout<<c<<" ";
            cout<<"\n";
        }
    
        

    }
    



    return 0;
}