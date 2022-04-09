#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;

    vector<string>v;
    vector<vector<bool>>e(n,vector<bool>(m));
    for(int i = 0;i<n;++i)
    {
        string s;cin>>s;
        v.push_back(s);
    }

    for(int i =n-1;~i;--i)
    {
        for(int j=0;j<m;++j)
        {
            vector<pair<int,int>>p;
            if(v[i][j]=='*')
            {
                int q = 1;
                int o = 0;
                while(i-q>=0 && j+q<m && j-q>=0)
                {
                    if(v[i-q][j+q]=='*' && v[i-q][j-q]=='*')
                    {
                        p.push_back({i-q,j-q});
                        p.push_back({i-q,j+q});

                        ++q;
                        ++o;
                    }

                    else
                    break;
                }
                if(o<k && e[i][j]==0)
                {
                    cout<<"NO\n";
                    return;
                }
                if(o>=k)
                {
                    for(auto c:p)
                    e[c.first][c.second]=1;

                    e[i][j]=1;
                }
            }
        }
    }
    cout<<"YES\n";
    return;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    solve();

    return 0;
}