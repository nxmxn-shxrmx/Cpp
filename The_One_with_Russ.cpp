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

        vector<int>a,b;

        for(int i =0;i<n;++i){
            int f;cin>>f;
            a.push_back(f);
        }
        for(int i =0;i<n;++i){
            int f;cin>>f;
            b.push_back(f);
        }
        int s =0;
        for(int i =0;i<n;++i){
            
            if(abs(a[i]-b[i])<=k)
            s++;

        }
        if(s>=x)
        cout<<"YES\n";

        else
        cout<<"NO\n";


    }



    return 0;
}