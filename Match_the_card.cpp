#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    bool d = true;

    vector<int>v;
    for(int i=0;i<n;++i){
        int f;cin>>f;
        v.push_back(f);
    }
    for(int i=0;i<n;++i){
        if(i==v[i]){
            cout<<i<<" ";
            d = false;
        }
    }
    if(d){
        cout<<-1;
    }
    return 0;
}
