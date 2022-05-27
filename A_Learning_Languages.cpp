#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<vector<int>>v;
vector<vector<int>>s;
vector<bool>d;

void dfs(int i)
{
    d[i]=true;
    for(auto c:v[i])
    {
        for(auto x:s[c])
        {
            if(!d[x])
            dfs(x);
        }
    }

}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    v = vector<vector<int>>(n);
    s = vector<vector<int>>(m);
    d = vector<bool>(n,false);
    int  c = 0;
    for(int i = 0;i<n;++i)
    {
        int y;cin>>y;
        if(y==0)
        c++;
        for(int j= 0;j<y;++j)
        {
            int f;cin>>f;
            f-=1;
            s[f].push_back(i);
            v[i].push_back(f);
        }
    }
    int x = 0;
    for(int i = 0;i<n;++i)
    {
        if(v[i].size()==0)
        continue;
        if(!d[i])
        {
            dfs(i);
            ++x;
        }
    }
    if(x!=0)
        x-=1;
    cout<<c+x<<"\n";

    return 0;
}