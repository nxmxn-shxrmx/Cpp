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
    int mn = INT_MAX,mx = INT_MIN;
    int sx,sn;

    for(int i=0;i<n;++i){
        int f;cin>>f;
        v.push_back(f);

        mn=min(mn,f);
        mx=max(mx,f);

        if(mn==v[i]){
            sn=i+1;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(mx==v[i])
        sx =i;
    }
    
    if(sn>sx){
        cout<<(n-sn)+sx;
    }
    else
    cout<<(n-sn-1)+sx;


    return 0;
}