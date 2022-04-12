#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while(t--)
    {
        int n,k;cin>>n>>k;
        map<int,vector<int>>v;
        for(int i = 0;i<n;++i)
        {
            int f;cin>>f;
            if(v[f].size()<k)
            v[f].push_back(i);
        }
        int m = 0;
        for(auto c:v)
        m+=v[c.first].size();

        m -=m%k;
        int x = 0;
        vector<int>ans(n);
        bool o =0;
        for(auto c:v)
        {
            for(auto y:c.second)
            {
                ans[y]=++x;
                x=x%k;
                m--;
                if(m==0)
                goto _output;
            }
        }
        _output:
            for(auto c:ans)
            cout<<c<<" ";

        cout<<"\n";
    }

    return 0;
}