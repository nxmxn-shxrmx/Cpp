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
        n--;
        ll l,r;cin>>l>>r;
        ll c;cin>>c;
        ll cl = c;
        ll cr = c;
        ll mx = r-l;
    
        cout<<c<<"\n";
        while(n--)
        {
            ll l1,r1,c1;
            cin>>l1>>r1>>c1;
    

            if(l1<l)
                l=l1,cl=mod;

            if(l1==l)
                cl =min(cl,c1);

            if(r1>r)
                r = r1,cr=mod;
            if(r1==r)
                cr =min(cr,c1);

            
            if(mx<r1-l1)
                mx = r1-l1,c=mod;
  
            if(mx==r1-l1)
            c = min(c,c1);         

            ll ans = cl+cr;
            if(mx==r-l)
            ans = min(ans,c);

            cout<<ans<<"\n";
                
        }
    }

    return 0;
}