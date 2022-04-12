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
        ll n,k;cin>>n>>k;
        vector<int>a;
        for(int i =0;i<k;++i)
        {
            ll f;cin>>f;
            a.push_back(f-1);
        }
        vector<ll>v(n,INT_MAX);
        for(int i = 0;i<k;++i)
        {
            ll f;cin>>f;
            v[a[i]]=f;
        }
        vector<ll>l(n,INT_MAX);
        ll p = INT_MAX;
        for(int i = 0;i<n;++i)
        {
            p = min(p+1,v[i]);
            l[i]=p;
        }
        vector<ll>r(n,INT_MAX);
        p = INT_MAX;
        for(int i =n-1;~i;--i)
        {
            p = min(p+1,v[i]);
            r[i]=p;
        }
        for(int i = 0;i<n;++i)
        cout<<min(r[i],l[i])<<" ";
        cout<<"\n";


    }


    return 0;
}