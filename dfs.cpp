#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

vector<int>v[N];

bool visit[N];

void dfs(int ve)
{
    cout<<ve<<" ";
    //take action on vertex after entering the vertex
    visit[ve] = true;

    for(auto x:v[ve])
    {
        //take action on child before entering the child vertex
    
        if(visit[x])
        continue;
        
        dfs(x);
        //take action on child after exiting the child vertex
    }

    //take action on vertex before exiting the vertex
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        int f,d;
        cin>>f>>d;
        v[f].push_back(d);
        v[d].push_back(f);
    }
    for(int i=1;i<=n;++i)
    {
        if(visit[i])
        continue;
        dfs(i);
        cout<<"\n";
    }
    return 0;
}