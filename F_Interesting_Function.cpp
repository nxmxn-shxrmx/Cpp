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
        ll n,m;cin>>n>>m;

        ll c = 0;
        while(m)
        {
            c+=(m-n);
            m/=10;
            n/=10;
        }
        cout<<c<<"\n";

    }

    return 0;
}