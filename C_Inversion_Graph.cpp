#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<bool>f;

void dfs(int i, vector<vector<int>>v)
{
    if(f[i])
    return;
    f[i]=true;
    for(auto c:v[i])
    {
        dfs(c,v);
    }
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        vector<ll>v;
        int c= 0;
        ll k = 0;
       
        for(int i = 0;i<n;++i)
        {
            ll f;cin>>f;
            
            v.push_back(f);
            k = max(v[i],k);
            if(k==i+1)
            c++;

        }
        cout<<c<<"\n";
        // vector<vector<int>>g(n);
        // if(v[0]==n-1 || v[n-1]==0)
        // {    
        //     cout<<1<<"\n";
        //     continue;
        //}
       
    
        // f = vector<bool>(n);
        // for(int i= 0;i<n;++i)
        // {
            // if(f[i]==false)
            // {
            //     dfs(i,g);
            //     c++;
            // }
       // }
        // cout<<c<<"\n";
    }


    return 0;
}