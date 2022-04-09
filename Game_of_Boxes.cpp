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

    ll je =0,jo=0;
    

    for(int i=0;i<n;++i){
        int f=0;cin>>f;
        v.push_back(f);
        if(i%2==0 && i!=(n-1)){

                je+=f;

        }
        if(i%2){
            jo+=f;
        }

    }
    ll s = v[0]+v[n-1];

    for(int i=0;i<n-1;++i){

        ll d = v[i]+v[i+1];
        s  = max(s,d);
    }
    s = max(s,je);
    s = max(s,jo);
    cout<<s;



    return 0;
}