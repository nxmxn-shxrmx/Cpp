#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<ll>v ={1,2,3,4,5,6};
    ll n;cin>>n;
    vector<ll>p(n+1);
    p[0]=1;
    for(int i = 1;i<n+1;++i)
    {
        for(auto c:v)
        {
            if(i-c>=0)
            p[i]+=p[i-c];
             p[i]%=mod;
        }
    }
    cout<<p[n]<<"\n";

    return 0;
}