#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;cin>>n>>k;
    vector<int>v;
    vector<ll>sum;
    sum.push_back(0);
    ll su =0;
    for(int i=0;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
    }
    sort(v.begin(),v.end());
    for(auto c:v)
    su+=c,sum.push_back(su);

    ll l = 1,r = n;
    ll y = v[0];
    ll p =1;

    while(l<=r)
    {
        ll m = (l+r)/2;
        bool u = false;
        for(int i = m-1;i<n;++i)
         {
        //    cout<<v[i]<<" "<<m<<"\n";
        //    cout<<v[i]*m<<" "<<sum[i]<<" "<<sum[i-m+1]<<"\n";
           if(abs(v[i]*m-(sum[i+1]-sum[i-m+1]))<=k)
           {
               y =v[i];
               u = true;
               break;
           }
        }
        if(u)
        l = m+1,p=m;
        else
        r = m-1;

        // cout<<p<<" "<<y<<"\n";

    }
    cout<<p<<" "<<y<<"\n";
    return 0;
}