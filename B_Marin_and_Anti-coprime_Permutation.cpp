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
        ll f;cin>>f;
        if(f%2)
        cout<<0<<"\n";

        else
        {
            ll k = f/2;
            ll o = 998244353;
            ll s= 1;
            ll i =1;
            while(i<=k)
            {
                s = (s*i)%o;
                ++i;
            }
            cout<<(s*s)%o<<"\n";
        }
    }

    return 0;
}