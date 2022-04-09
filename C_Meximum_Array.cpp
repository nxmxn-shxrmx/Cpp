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
        ll n;cin>>n;
        vector<ll>v;
        set<ll>s;
        vector<ll>me;
        map<ll,ll>m;

        for(int i =0;i<n;++i)
        {
            ll f;cin>>f;
            v.push_back(f);
            m[f]++;
        }
        int x=0;
        for(int i =0;i<n;++i)
        {
            s.insert(v[i]);
            m[v[i]]--;

            while(s.find(x)!=s.end())//1 0 2 3 
            x++;

            if(m[x]==0)
            {
                s.clear();
                me.push_back(x);
                x = 0;
            }
        }
        cout<<me.size()<<"\n";
        for(auto c:me)
        cout<<c<<" ";
        cout<<"\n";
    }



    return 0;
}