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

        ll n;cin>>n;

        vector<ll>v;
        for(int  i =0;i<n;++i){

            int f;cin>>f;
            v.push_back(f);
        }

        if(v[0]%2==0)
        cout<<"NO"<<"\n";

        else
        {
                while(true){
                ll h = v.size();
                bool ti = true;
                for(int i = h;i>0;--i){
                    if(v[i-1]%(i+1)!=0){
                        
                        auto it = v.begin()+i-1;
                        v.erase(it);
                        ti = false;
                        break;

                    }
                } 
                if(ti)
                break;
            }
            if(v.empty())
            cout<<"YES"<<"\n";

            else
            cout<<"NO"<<"\n";
        }

    }


    return 0;
}