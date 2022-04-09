#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

vector<int>v[N];
bool vis[N];

void dfs(int ver)
{
    cout<<ver<<" ";
    vis[ver]= true;

    for(auto c: v[ver])
    {
        if(vis[c])
        continue;

        dfs(c);
    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,e;
    cin>>n>>e;

    for(int i =0;i<e;++i)
    {
        int f,g;
        cin>>f>>g;
        v[f].push_back(g);
        v[g].push_back(f);
    }
    for(int i =1;i<=n;++i)
    {
        if(vis[i])
        continue;

        dfs(i);
        cout<<"\n";
    }


    return 0;
}