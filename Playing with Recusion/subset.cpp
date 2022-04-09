#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<vector<int>>u;
void subset(vector<int>&v,int i,vector<int>&s)
{
    if(i==v.size())
    {
        u.push_back(s);
        return;
    }

    subset(v,i+1,s);
    s.push_back(v[i]);
    subset(v,i+1,s);
    s.pop_back();

}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<int>v;
    vector<int>s;
    for(int i = 0;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
 
    }
    subset(v,0,s);
    cout<<u.size()<<"\n";

    return 0;
}