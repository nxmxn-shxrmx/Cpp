#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

bool vis[N];
vector<int>v[N];

vector<vector<int>>connected;
vector<int>current;

void dfs(int f)
{
    vis[f]=true;
    current.push_back(f);
    for(auto c:v[f])
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
    int co =0;
    for(int i =0;i<e;++i)
    {
        int f,g;
        cin>>f>>g;
        v[f].push_back(g);
        v[g].push_back(f);
    }
    /*


    */
   for(int i =1;i<=n;++i)
   {
       if(vis[i])
       continue;

       current.clear();
       dfs(i);
       connected.push_back(current);
       co++;
   }
   
    cout<<co<<"\n";
    for(auto c:connected)
    {
    for(auto x:c)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    }


    return 0;
}