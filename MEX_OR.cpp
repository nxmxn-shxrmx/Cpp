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
        if(n==0)
        cout<<1<<"\n";

        else{            

            ll l = pow(2,(int)(log2(n)));
            if(n==2*l-1)
            cout<<n+1<<"\n";

            else{
                cout<<l<<"\n";
            }
        }
    }



    return 0;
}
