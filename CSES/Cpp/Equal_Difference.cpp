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

        map<int,int>m;

        for(int i = 0; i<n;++i){
            int f;cin>>f;
            m[f]++;
        }
        int mi = 0;

        for (auto x:m){

            mi = max(x.second,mi);

        }
        if (n<=2)
        cout<<0<<"\n";

        else 
        cout<<min(n-2,n-mi)<<"\n";
    }



    return 0;
}