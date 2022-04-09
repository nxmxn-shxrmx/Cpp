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

        int n,a,b;
        cin>>n>>a>>b;

        ll so = 0;

        string s;cin>>s;
        for(auto x:s){
            if(x=='0')
            so+=a;

            else
            so+=b;
        }
        cout<<so<<"\n";
    }



    return 0;
}