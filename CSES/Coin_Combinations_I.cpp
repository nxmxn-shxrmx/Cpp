#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,x;cin>>n>>x;
    vector<ll>v;

    for(int i = 0;i<n;++i)
    {
        ll f;cin>>f;
        v.push_back(f);
    }

    vector<ll>p(x+1);
    p[0]=1;
    
    
    for(int i =1;i<x+1;++i)
    {
      
        for(auto c:v)
        {
            
            if(i-c>=0)
            {
               
                p[i]+=p[i-c];
            

            }

            p[i]%=mod;
        }
    }
    cout<<p[x]<<"\n";


    return 0;
}