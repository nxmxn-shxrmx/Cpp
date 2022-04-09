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
        ll n,k;
        cin>>n>>k;

        ll s =0;
        vector<ll>v;
        
        for(int i=0;i<n;++i)
        {
            ll f;cin>>f;
            v.push_back(int(pow(10,f)+0.25));
        }
        k+=1;
        int i =0;
      
       while(k)
        {
          if(i==n-1)
            {
              s+=k*v[i];
           break;
            }
          ll g = k*v[i];
      if(g>v[i+1])
         {
           g = (v[i+1]-v[i]);
        }
        s+=g;
        k = k - (g/v[i]);
          i++;
        }
        
        /* while(k)
        {
            if(i==n-1)
            {
                s+=k*v[i];
                break;
            }
            ll g= min(k,(v[i+1]/v[i]-1));
            s+=(1ll*g*v[i]);
            k = k - g;
            i++;
        }
        */
        cout<<s<<"\n";


    }


    return 0;
}