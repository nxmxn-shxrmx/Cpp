#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
 
vector<bool>prime(1000001,true);

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   
    int t;cin>>t;
     for (int i = 2; i*i<= 1000001; i++) {
      if (prime[i] == true) {
         for (int j = i*2; j<= 1000001; j += i)
         prime[j] = false;
      }
   }
    while(t--)
    {
        ll n,e;cin>>n>>e;

        vector<ll>v(n);
        for(int i = 0;i<n;++i)
        {
            ll f;cin>>f;
            v[i]=f;
    
        
        }
        ll k=0;
        for(int i = 0;i<n;++i)
        {
            if(v[i]!=1 && prime[v[i]]){

            ll l = 0;
            ll r = 0;
            for(int j = i+e;j<n;j+=e)
            {
                if(v[j]==1)
                l++;
                else
                break;
            }
            for(int j = i-e;j>=0;j-=e)
            {
                if(v[j]==1)
                r++;
                else
                break;
            }
            k+=(l+r+l*r);
            }
        }
        cout<<k<<"\n";
    }


    return 0;
}