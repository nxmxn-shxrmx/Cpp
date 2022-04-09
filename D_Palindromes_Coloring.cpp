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
        ll n,k;
        cin>>n>>k;
        //aa b xx yy z
        string s;cin>>s;
        map<char,int>m;
        for(auto c:s)
        {
            m[c]++;
        }
        ll ec = 0;
        ll oc = 0;

        if(m.size()==n || s.size()==k)
        cout<<1<<"\n";

        else
        {
        for(auto c:m)
        {
             ec+=c.second/2;
             
             oc+=c.second%2;
        
        }
         if(ec<k)
         cout<<1<<"\n";

         else
         {
             ll ans = 2*(ec/k);
             oc += 2*(ec%k);

             if(oc>=k)
             ans++;

             cout<<ans<<"\n";

         }
        }

  //      11 2
//a b c a b c a b c a c
// aa aa bb b cc cc
//
       

    
    }


    return 0;
}