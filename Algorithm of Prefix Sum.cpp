#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n>>k;

    vector<int>v,s;
    int d = 0;
    s.push_back(0);
    for(int i =0;i<n;++i){

        int f;cin>>f;
        v.push_back(f);
        d+=f;
        s.push_back(d);
    }
    while(k--){
        int l,r;
        cin>>l>>r;
        cout<<s[r]-s[l-1]<<"\n";

    }


    return 0;
}