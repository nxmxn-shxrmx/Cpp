#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define mod (ll)(1e9 +7)
 
const int N =1e5+10;
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    ll t;cin>>t;
 
    while(t--)
    {
        ll n;cin>>n;
        vector<int>v(32,0);
        for(int i = 0;i<n;++i)
        {
            ll f;cin>>f;
            for(ll j = 0;j<32;++j)
            {
                if(f&(1<<j))
                v[j]++;
            }
        }
        set<ll>s(begin(v),end(v));
        auto it = s.begin();
    
        for(int i =1,j=0;i<=n;)
        {
            if(*it%i)
            {
                ++i;
                it = s.begin();
            }
            else 
            {
                ++it;
            }
            if(it==s.end())
            {
                cout<<i<<" ";
                it = s.begin();
                ++i;
            }
        }
        cout<<"\n";
    }
 
    return 0;
}