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

        int n,x,k;

        cin>>n>>x>>k;

        if((x%k==0 )|| ((n+1)%k==x%k)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }



    return 0;
}