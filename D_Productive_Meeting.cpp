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
        int n;cin>>n;
        set<pair<ll,int>>s;
        for(int i =1;i<=n;++i)
        {
            ll f;cin>>f;
            if(f!=0)
            {
                s.insert({f,i});
            }
        }
        if(s.size()==1)
        cout<<0<<"\n";

        else if(s.size()==2)
        {
            auto k = *s.begin();
            auto it = s.begin();
            ++it;
            auto u = *it;

            ll q = k.first;
            cout<<q<<"\n";
            while(q--)
            {
                cout<<k.second<<" "<<u.second<<"\n";
            }
        }
        else
        {
            vector<pair<int,int>>v;
            while(s.size()>1)
            {
                auto k = *s.begin();
                s.erase(s.find(k));
                auto it = s.end();
                --it;
                auto q = *it;
                s.erase(it);
                v.push_back({k.second,q.second});
                if(k.first-1!=0)
                s.insert({k.first-1,k.second});
                if(q.first-1!=0)
                s.insert({q.first-1,q.second});
            }
            cout<<v.size()<<"\n";
            for(auto c:v)
            {
                cout<<c.first<<" "<<c.second<<"\n";
            }
        }
    }

    return 0;
}