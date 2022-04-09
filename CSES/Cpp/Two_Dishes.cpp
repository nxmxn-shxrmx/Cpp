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

        int n,fr,v,fi;
        cin>>n>>fr>>v>>fi;

        if(n>v)
        cout<<"NO\n";

        else{
            int c =0;
            if(fr>fi){
                if(fr>=v){
                    c = v;
                    v = 0;
                }
                else{
                    c = fr;
                    v-=fr;
                if(v>=fi){
                    c+=fi;
                }
                else{
                    c+=v;
                }
                }
                
            }
            else{
                 if(fi>=v){
                    c = v;
                    v = 0;
                }
                else{
                    c = fi;
                    v-=fi;

                if(v>=fr){
                    c+=fr;
                }
                else{
                    c+=v;
                }
                }
            }
            if(c>=n)
            cout<<"YES\n";

            else
            cout<<"NO\n";
        }
        
    }



    return 0;
}