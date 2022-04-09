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

        int n,k;
        cin>>n>>k;
        vector<int>v;

        int ma = INT_MIN;
        for(int i=0;i<n;++i){
            int f;cin>>f;
            v.push_back(f);
            ma = max(ma,f);
        }
        int s=0;
        for(int i=0;i<n;++i){

            if(ma==v[i]){

                if(i+1>=k){
                    s+=n-i;
                }
            }
        }
        cout<<s<<"\n";


        }
        

    return 0;
}