#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){

        int l,r;
        cin>>l>>r;

        if(l<(r/2 +1))
        cout<<((r-1)/2)<<"\n";

        else
        cout<<r-l<<"\n";
    }



    return 0;
}