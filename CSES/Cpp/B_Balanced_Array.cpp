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
        if((n/2)%2)
        cout<<"NO";

        else{
            cout<<"YES"<<"\n";
            ll s =0;
            for(int i=2;i<=(n);i=2+i){

                cout<<i<<" ";
                s+=i;
            }
            ll ss = (n/2);

            for(int i=1;i<n-1;i+=2){
                cout<<i<<" ";
                s-=i;
            }
            cout<<s;
        }
        cout<<"\n";
    }



    return 0;
}