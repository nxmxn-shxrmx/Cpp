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
        ll n,l;cin>>n>>l;
        ll s=0; 
        if(n>l)
        s=n-l;
        s = s+n;
        cout<<s<<"\n";

    }

    return 0;
}