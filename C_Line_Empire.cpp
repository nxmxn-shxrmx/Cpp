#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
         int n,x,y;cin>>n>>x>>y;
        vector<int>v(n+1);
        ll s=0; 
        for(int i=1;i<=n;++i)
        {
            cin>>v[i];
            s+=v[i];
        }
        ll r=1e18;
        for(int i=0;i<=n;++i){
            ll c = (x+y)*(ll)v[i];
            s -=v[i];
            c+=(s-(n-i)*(ll)v[i]) * y;
            r=min(r,c);
    }
            cout<<r<<"\n";
    }
    return 0;
}