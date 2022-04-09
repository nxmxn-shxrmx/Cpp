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
        ll n;cin>>n;
        vector<ll>v;
        ll s=0;
        ll k=INT_MIN;
        for(int i =0;i<n;++i)
        {
            ll f;cin>>f;
            v.push_back(f);
            s+=f;
            k =max(k,f);
        }
        if(k==0)
        cout<<0<<"\n";

        else if(s>=2*k)
        cout<<1<<"\n";
        else
        cout<<2*k-s<<"\n";

    }



    return 0;
}