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
        int n,x;cin>>n>>x;
        vector<ll>v;
        bool d = true;
        ll s = 0;
        for(int i = 0;i<n;++i)
        {
            ll f;cin>>f;
            if(f<0)
            d = false;
            v.push_back(f);
            s+=f;
        }
        if(d)
        {
            for(int i = 0;i<n+1;++i)
            cout<<s+i*x<<" ";
            cout<<"\n";
            continue;
        }
        vector<ll>p(n+1,INT_MIN);
        p[0]=0;
        for(int i =0;i<n;++i)
        {
            s = 0;
            for(int j =i;j<n;++j)
            {
                s+=v[j];
                p[j-i+1] = max(p[j-i+1],s);
            }
        }
        // for(auto c:p)
        // cout<<c<<" ";
        // cout<<"\n";
        for(ll i = 0 ;i<n+1;++i)
        {
            ll o = 0;
            for(ll j = 0;j<n+1;++j)
            {
                o = max(o,p[j]+min(i,j)*x);
            }
            cout<<o<<" ";
        }
        cout<<"\n";
    }


    return 0;
}