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
        ll n,k;
        cin>>n>>k;

        ll p = 1;
        for(int i = 0;i<k;++i)
        p = (p*n)%mod;
        cout<<p<<"\n";
        
    }


    return 0;
}