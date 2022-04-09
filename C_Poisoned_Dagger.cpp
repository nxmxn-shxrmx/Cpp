#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;cin>>t;

    while(t--)
    {
        ll n,h;
        cin>>n>>h;
        
        vector<ll>v;
        for (ll i = 0; i <n;++i)
        {
            ll f;cin>>f;
            v.push_back(f);
        }
        if(n>=h)
        cout<<"1\n";

        else if(n==1)
        cout<<h<<"\n";

        else
        {
            ll mi  =1;
            ll ma =h; 
            ll d;
            while(ma-mi>1)
            {
                ll s =0;
                ll mid = (mi +ma)/2;

                for(ll i =0;i<n-1;++i)
                {
                    s +=min(v[i+1]-v[i],mid);//main poll
                }
                s+=mid;  
                if(s>h)
                {
                    ma = mid;
                    d = mid; 
                } 
                else if(s==h)
                {
                    d =mid;
                    break;
                }
                else
                mi = mid;

            }
            cout<<d<<"\n";


        }
        
    }



    return 0;
}