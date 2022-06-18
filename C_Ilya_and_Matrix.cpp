#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<ll>v(n);
    for(int i =0;i<n;++i)
    cin>>v[i];
    sort(v.rbegin(),v.rend());
    
    ll su = 0;
    ll c = 0;
    ll k = log2(n);
    ll o = k/2;
    o++;
    for(int i = 0;i<n;++i)
    {

        if(i!=0 && ceil(log2(i))==floor(log2(i)))
        {
            int h = log2(i);
            if(h%2==0)
            o--;
        }
       //  cout<<o<<"*"<<v[i]<<"\n";
        su+=v[i]*o;

    }
    cout<<su<<"\n";

    return 0;
}