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
        int n;cin>>n;

        int f;cin>>f;
        cout<<0<<" ";
        ll k = 0^f;
        for(int i= 1;i<n;++i)
        {
            ll f;cin>>f;
            ll p = k&(~f);
            cout<<p<<" ";
            k = p^f;
        }
        cout<<"\n";
    }

    return 0;
}