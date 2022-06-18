#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

vector<vector<int>>v;
vector<int>w;

void dsf(int i ,int pre=-1)
{
    for(auto x:v[i])
    {
        if(x==pre)
        continue;

        dsf(x,i);
        w[i]+=w[x];

    }

}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    v = vector<vector<int>>(n+1);
    w = vector<int>(n+1);

    for(int i = 1;i<n;++i)
    {
        int x,y,t;cin>>x>>y>>t;
        v[x].push_back(y);
        v[y].push_back(x);

        if(t==2)
        {
            w[x]=1;
            w[y]=1;
        }
    }

    dsf(1);
    vector<int>ans;
    for(int i=1;i<=n;++i)
    {
        if(w[i]==1)
        ans.push_back(i);
    }   
    cout<<ans.size()<<"\n";
    for(auto x:ans)
    cout<<x<<" ";

    return 0;
}