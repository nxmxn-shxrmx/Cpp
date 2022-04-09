#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while(t--){

        ll n,x;
        cin>>n>>x;
        
        ll l =1,r = 2*n -1;
        ll g;
        ll a;
        while(r-l>=0)
        {
          ll mid  = (l+r)/2;
          if(mid<=n)
          {
           g = mid*(mid+1)/2;
          }
          else 
          {
            ll k = mid -n; 
            ll j = n -k-1;
             g = n*(n+1)/2 + (n*(n-1)/2 - j*(j+1)/2);
          }
          if(g==x)
          {
           a = mid;
            break;
          }
          else if(g>x)
          {
            r = mid-1;
          }
          else
          {
            a = mid+1;
            l = mid+1;
          }
        }
        cout<<min(a,2*n-1)<<"\n";
    }



    return 0;
}