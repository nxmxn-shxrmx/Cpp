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
        ll n,m;cin>>n>>m;
        vector<vector<int>>v;
        for(int i = 0;i<n;++i)
        {
            vector<int>p;
            string s;cin>>s;
            for(auto c:s)
            {
                if(c=='0')
                p.push_back(0);
                else
                p.push_back(1);
            }
            v.push_back(p);
        }
        if(v[0][0]==1)
        {
            cout<<-1<<"\n";
            continue;
        }
        vector<vector<int>>o;
        for(int i =m-1;~i;--i)
        {
            for(int j = n-1;~j;--j)
            {
                if(v[j][i])
                {
                    if(j!=0)
                        o.push_back({j,i+1,j+1,i+1});
                    else
                        o.push_back({j+1,i,j+1,i+1});
                }
            }
        }
        cout<<o.size()<<"\n";
        for(auto c:o)
        {
            for(auto x:c)
            cout<<x<<" ";
            cout<<"\n";
        }
    }

    return 0;
}