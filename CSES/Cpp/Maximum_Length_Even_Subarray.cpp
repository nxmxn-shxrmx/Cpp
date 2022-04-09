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
    
        ll s = ((n+1)*n)/2;
            if(s%2==0){
                cout<<n<<"\n";
            }
            else
            cout<<n-1<<"\n";
        }
    
    return 0;
}