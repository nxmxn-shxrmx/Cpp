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
        multiset<ll>s;
        ll n,m;
        cin>>n>>m;
        for(ll i =0;i<n;++i)
        {
            for(ll j = 0;j<m;++j)
            {
                s.insert(max(i,n-i-1)+ max(j,m-j-1));
            }
        }
       // ll i =0,j=0;
        // set<pair<ll,ll>>mu;
        
        // while(s.size()!=n*m)
        // {
        //     ll k = abs(i+1-n)+abs(j+1-m);
        //     s.insert(k);
                    
        //     mu.insert({i,j});
        //     if(mu.find({n-i-1,j})==mu.end())
        //     {
        //         s.insert(k);
        //         mu.insert({n-i-1,j});
        //     }
        //     if(mu.find({i,m-j-1})==mu.end())
        //     {
        //         s.insert(k);
        //         mu.insert({i,m-1-j});
        //     } 
        //    if(mu.find({n-i-1,m-1-j})==mu.end())
        //     {
        //         s.insert(k);
        //         mu.insert({n-i-1,m-1-j});
        //     }
        //     j+=1;
        //     if(j+1>(m+1)/2)
        //     {
        //         i +=1;
        //         j = 0;
        //     }

        // }
         for(auto c:s)
        cout<<c<<" ";

         cout<<"\n";
    }


    return 0;
}