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
        vector<ll>v;
        
        for(int i = 0;i<n;++i)
        {
            ll f;cin>>f;
            v.push_back(f);
        }
        ll me = v[0];
        ll mo = v[1];
        ll ev = v[0];
        ll od = v[1];
        ll ans = ev*n + od *n;

        for(int i = 2;i<n;++i)
        {
            if(i%2)
            {
                od+=v[i];
                mo = min(mo,v[i]);
            }
            else
            {
                ev+=v[i];
                me = min(me,v[i]);
            }
            ll even = (i)/2+1;
            ll odd = (i+1)/2;
            ans = min(ans,ev+od + (n-even)*me + (n-odd)*mo);
        }
        cout<<ans<<"\n";

    }

    return 0;
}