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

        int a1,a2,b1,b2,c1,c2;

        cin>>a1>>a2>>b1>>b2>>c1>>c2;

        if(a2<a1 || b2<b1 || c1<c2)
        cout<<"NO"<<"\n";

        else
        cout<<"YES"<<"\n";



    }



    return 0;
}