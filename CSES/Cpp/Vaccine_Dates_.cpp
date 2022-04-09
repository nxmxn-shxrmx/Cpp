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

        int c,l,r;
        cin>>c>>l>>r;

        if(c>=l && c<=r)
        cout<<"Take second dose now\n";

        else if(c<l)
        cout<<"Too Early\n";

        else
        cout<<"Too Late\n";
    }

    return 0;
}