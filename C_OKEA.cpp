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
        ll n,k;cin>>n>>k;
        vector<vector<int>>v;
        bool w =0;
        int e = 1;
        int o =2;
        for(int i = 0;i<n;++i)
        {
            vector<int>d;
            for(int j = 0;j<k;++j)
            {
                if(i%2==0)
                {
                    if(e>n*k)
                    {
                        w = true;
                        break;
                    }
                    d.push_back(e);
                    e+=2;
                }
                else
                {
                    if(o>n*k)
                    {
                        w = true;
                        break;
                    }
                    d.push_back(o);
                    o+=2;
                }
            }
            v.push_back(d);
        }
        if(w)
        cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(auto c:v)
            {
                for(auto x:c)
                    cout<<x<<" ";
                    cout<<"\n";
            }
        }
    }

    return 0;
}