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

        int s = n*(n+1)/2;
        if(s%2)
        cout<<"NO\n";

        else{
            cout<<"YES\n";
            for(int i =1;i<=n;++i){
                if(i%4==1)
                cout<<i<<" ";
            }
            for(int i =1;i<=n;++i){
                if(i%4==0)
                cout<<i<<" ";
            }
            cout<<"\n";

            for(int i =1;i<=n;++i){
                if(i%4==3)
                cout<<i<<" ";
            }
            for(int i =1;i<=n;++i){
                if(i%4==2)
                cout<<i<<" ";
            }
            cout<<"\n";
    }

    }



    return 0;
}