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

        ll n,p;
        cin>>n>>p;

        if(p==1)
            cout<<n-1<<"\n";

        else{

            ll s =1;
            ll ti = 0;
            while(s<p){
                s*=2;
                ti++;
            }
            if(s<n)
            {
                ti += ceil(float(n-s)/p);
                //to get non- fraction x +y-1 /y
            }
            cout<<ti<<'\n';

        }
        
    }

    return 0;
}