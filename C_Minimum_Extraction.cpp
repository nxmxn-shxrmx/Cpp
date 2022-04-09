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

        vector<int>v;
        
        for(int i=0;i<n;++i){
            int f;cin>>f;
            v.push_back(f);
        }
        sort(v.begin(),v.end());
        int h =v[0];
        for(int i = 0;i<n-1;++i){

            h = max(h,v[i+1]-v[i]);

        }
        cout<<h<<"\n";
    }


    return 0;
}