#include<bits/stdc++.h>
using namespace std;

#define ll long long
bool isCheck(ll x,vector<ll>v,int k)
{
    cout<<x<<" ";
    k--;
    int j=0;
    for(int i=1;i<v.size();++i)
    {
        if(k==0)
        return 1;
        if(v[j]-v[i]>=x)
        j=i,k--;
    }
    if(k==0)
    return 1;
    return false;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,k;cin>>n>>k;
    vector<ll>v;
    for(int i =0;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
    }
    sort(begin(v),end(v));
    ll l=0;
    ll r = v[n-1]-v[0];
    ll ans=0;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(isCheck(mid,v,k))
        ans= mid,l=mid+1;
        else
        r = mid-1;

    }
    cout<<ans<<"\n";

    return 0;
}