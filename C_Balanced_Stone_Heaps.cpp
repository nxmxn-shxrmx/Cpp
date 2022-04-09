#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

bool check(ll d,vector<ll>&v)
{
    vector<ll>s(begin(v),end(v));
    for(int i = s.size()-1;i>=2;--i)
    {
        if(s[i]<d)
        return false;

        ll x = min(v[i],s[i]-d)/3;

        s[i-1] = s[i-1] + x;
        s[i-2] = s[i-2] + 2*x;
    }
    return s[0]>=d && s[1]>=d;

}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;cin>>t;

    while(t--)
    {
        ll n;cin>>n;
        ll r = 1;
        vector<ll>v;
        for(int i =0;i<n;++i)
        {
            ll f;cin>>f;
            v.push_back(f);
            r = max(f,r);
        }
        ll l = 0;
        

        while(r-l>1)
        {
            ll mid =(r+l)/2;


            if(check(mid,v))
            l = mid;

            else
            r = mid-1;
           
        }
        cout<<r<<"\n";

    }



    return 0;
}