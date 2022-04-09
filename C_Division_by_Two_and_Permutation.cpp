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
         for(ll i =1;i<=n;++i)
         s.insert(i);

         for(ll i =0;i<n;++i)
         {
             ll f;cin>>f;
             
             while (f>n)
             {
                 f =f/2;
             }
             if(s.find(f)!=s.end())
             s.erase(f);

             else
             v.push_back(f);
         }
            ll k=1;
            ll i =0;
            sort(begin(v),end(v));
            while(s.size())
            {
                auto it = s.begin();
                if(s.find(v[i])!=s.end())
                {
                    s.erase(v[i]);
                    ++i;
                }
                else if(v[i]>*it)
                {
                    v[i]/=2;
                }
                else
                {
                    cout<<"NO\n";
                    k =0;
                    break;
                }

            }
            if(k)
            cout<<"YES\n";
         
    }



    return 0;
}