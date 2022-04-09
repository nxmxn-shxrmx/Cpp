#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
ll h = INT_MAX;
ll s = 0;
vector<ll>v;

// bool check(ll val,ll a,ll d)
// {
//     ll k = 0;
//     if(a>val)
//     k += abs(val-a);
//     if(d>s-val)
//     k +=abs(s-d-val);

//     if(k<h)
//     {
//         h = k;
//         return true;
//     }
//     return false;
// }
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    for(int i = 0;i<n;++i)
    {
        ll f;cin>>f;
        s+=f;
        v.push_back(f);
    }
    sort(begin(v),end(v));
    
    int t;cin>>t;
    while(t--)
    {
        ll a,d;cin>>a>>d;
        h = INT_MAX;

        ll i = lower_bound(begin(v),end(v),a)-v.begin();
        ll c = LLONG_MAX;

        if(i>0)
        c = min(c,a-v[i-1] + max(0ll,d+v[i-1]-s));
        if(i<n)
        c = min(c,max(0ll,d+v[i]-s));
        cout<<c<<"\n";
        // ll l = 0;
        // ll r = n;
        // while(l<=r)
        // {
        //     ll mid = (l+r)/2;
        //     if(check(v[mid],a,d))
        //     {
        //         l = mid;
        //     }
        //     else
        //     r = mid-1;
        // }
        // cout<<h<<"\n";
    }




    return 0;
}