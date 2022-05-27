#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
map<pair<int,int>,bool>m;
map<pair<int,int>,vector<pair<int,int>>>v;
void dsf(pair<int,int>p)
{
    m[p]=true;
    for(auto c:v[p])
    {
        if(!m[c])
        dsf(c);
    }
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    for(int i = 0;i<n;++i)
    {
        int x,y;
        cin>>x>>y;
        v[{x,y}].push_back({x,y});
        for(auto c:v)
        {
            if(c.first.first==x && c.first.second==y)
            continue;

            if(c.first.first==x)
            {
                v[c.first].push_back({x,y});
                v[{x,y}].push_back(c.first);
            }
            if(c.first.second==y)
            {
                v[c.first].push_back({x,y});
                v[{x,y}].push_back(c.first);
            }
        }
    }
    int x = 0;
    for(auto c:v)
    {
        if(!m[c.first])
        {
            dsf(c.first);
            x++;
        }
    }
    cout<<x-1<<"\n";

    return 0;
}