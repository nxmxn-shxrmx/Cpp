#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;++i){
        int t;cin>>t;
        v.push_back(t);
    }
    

    for(int i=0;i<1<<n;++i){
        for(int j=0;j<n;++j){

            if(i&(1<<j)){
                cout<<v[j]<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}