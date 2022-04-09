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

        int n;cin>>n;

        ll m =1;
        vector<ll>v;

        for(int i =0;i<n;++i){
            int f;cin>>f;
            v.push_back(f);
            m*=f;
        }
        int d = 0;
        if (count(v.begin(),v.end(),m) <= 0)
        cout<<0<<"\n";

        

        else{

         for(int i=0;i<1<<n;++i){
             ll f =1;
        for(int j=0;j<n;++j){

            if(i&(1<<j)){
                f*=v[j];
            }
             if (count(v.begin(),v.end(),m) <= 0){
                cout<<0<<"\n";
                d =1;
                break;
             }

            
        }
        
        if(d==1)
        break;
    }

    if (d==0)
    cout<<1<<"\n";
        }



    }


    return 0;
}