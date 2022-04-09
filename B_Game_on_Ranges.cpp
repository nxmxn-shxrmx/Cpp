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
        set<int>s;
        vector<pair<int,pair<int,int>>>v,vi;
        vector<pair <pair<int,int> ,int> >vai;
        set<int>vw;

        for(int i =1;i<=n;++i)
        vw.insert(i);

        for(int i =0;i<n;++i)
        {
            int g,h;
            cin>>g>>h;
            if(g==h)
            {
            vai.push_back({{g,h},g});
            s.insert(g);
            vw.erase(g);
            }

            else
            {
            if(h-g==1)
            v.push_back({1,{g,h}});

            else
            vi.push_back({h-g,{g,h}});
            }
        }
        sort(begin(vi),end(vi));
        for(auto c:v)
        {
            if(s.find(c.second.first)!=s.end())
            {
                s.insert(c.second.second);
                 vai.push_back({{c.second.first,c.second.second},c.second.second});
                 vw.erase(c.second.second);
            }
            else
            {
                s.insert(c.second.first);
                vw.erase(c.second.first);
                 vai.push_back({{c.second.first,c.second.second},c.second.first});
            }
        }

      for(auto x: vw)
      {
            
         for (auto it = vi.begin(); it != vi.end(); ++it)
        {
            int l  = (*it).second.first;
            int r  = (*it).second.second;

            if(x>=l && x <=r)
            {

                vai.push_back({{l,r},x});
                vi.erase(it);
                break;
            }
        }
      }
        for(auto c: vai)
        {
            cout<<c.first.first<<" "<<c.first.second<<" "<<c.second<<"\n";
        }
        cout<<"\n";
        

    }



    return 0;
}