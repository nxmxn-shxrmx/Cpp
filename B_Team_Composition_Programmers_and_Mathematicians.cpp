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

        ll p,m;
        cin>>p>>m;

        if(p==m){
            cout<<(p+m)/4<<"\n";
        }
        else{
            ll h = min(p,m);
            if((p+m)/4>h)
                cout<<h<<"\n";

                else
                {
                    cout<<(p+m)/4<<"\n";
                }
            }


    }



    return 0;
}