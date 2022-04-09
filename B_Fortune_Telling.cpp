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
        ll n,x,y;
        cin>>n>>x>>y;

        vector<ll>v(n);
        ll s = 0;

        for(int i = 0;i<n;++i)
        {
            cin>>v[i];
            s+=v[i];
        }
        
        if((s+x)%2==y%2)
            cout<<"Alice\n";
        else
            cout<<"Bob\n";
    }


    return 0;
}