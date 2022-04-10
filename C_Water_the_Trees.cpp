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
        int n;cin>>n;
        
        ll c = INT_MAX;
        ll a = INT_MAX;
        ll o=0;
        ll e =0;
        ll o1=0;
        ll e1=0;
        vector<ll>v;
        ll k = INT_MIN;
        for(int i = 0;i<n;++i)
        {
            ll f;cin>>f;
            v.push_back(f);
            k = max(f,k);
        }
        for(int i = 0;i<n;++i)
        {
            o+=(k-v[i])%2;
            e+=(k-v[i])/2;
            o1+=(k+1-v[i])%2;
            e1+=(k+1-v[i])/2;
        }
        if(o>e)
        c = 2*o-1;

        else
        {
            ll x = e-o;
            if(x%3==1  || x%3==0)
            c = 2*(e-x/3);

            else
            c = 2*(e-x/3)-1;
        }

        if(o1>e1)
        a = 2*o1-1;

        else
        {
            ll x =e1-o1;
            if(x%3==1 || x%3==0)
            a = 2*(e1-x/3);

            else
            a = 2*(e1-x/3)-1;
        }        
        cout<<min(c,a)<<"\n";




    }


    return 0;
}