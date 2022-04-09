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
        
        ll an = 0;
        ll p = 1;
        for(int i = 0;i<=31;++i)
        {
            if(k &(1<<i))
            an = (an + p)%mod;

            p = (p*n)%mod;
            p %=mod;
        }
        cout<<an<<"\n";
    }
   return 0;
}