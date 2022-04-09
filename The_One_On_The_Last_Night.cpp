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

        ll k = n;
    
        cin>>n>>x;
        vector<ll>v;
    
        ll p =1;
        while(n)
        {
            int r = n%10;
            v.push_back(r);
            p*=r;
            n/=10;
        }
        if(x==0)
        cout<<p<<"\n";

        else
        {   
            sort(begin(v),end(v));
            while(x)
            {
                if(v[0]==9)
                break;
                else
                v[0]=v[0]+1;

                sort(begin(v),end(v));
                x--;
            }
            ll ii =1;
            for(int i =0;i<v.size();++i)
            {
                ii*=v[i];

            }
            cout<<ii<<"\n";


        }
        
    }


    return 0;
}