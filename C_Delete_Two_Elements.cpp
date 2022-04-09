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
        vector<ll>v(n);
        map<ll,ll>m;
        ll me = 0;
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
            me+=v[i];
            m[v[i]]++;
        }
        
        ll c = 0;
        ll k = 2*me/n;
        if((2*me)%n!=0)
        {
        cout<<0<<"\n";
        continue;
        }
        for(int i = 0;i<n;++i)
        {
            ll p = v[i];
            ll q = k - p;
            if(m.find(q)!=m.end())
            c+=m[q];

            if(p==q)
            c--;
        }
        cout<<c/2<<"\n";


        
    }

    return 0;
}