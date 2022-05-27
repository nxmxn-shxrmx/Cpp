#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =10000000;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int>lp(N+1);
    vector<ll>tp;
    set<ll>l;
    for(int i=2;i<=N;++i)
    {
        if(lp[i]==0)
        {
            lp[i]=i;
            tp.push_back(i);
            l.insert(i);
        }
        for(int j = 0;j<(int)tp.size() && tp[j]<=lp[i] && i*tp[j]<=N;++j)
        {
            lp[i*tp[j]]=tp[j];
        }
    }
    ll n;cin>>n;
    while(n--)
    {
        ll x;cin>>x;
        double c= sqrtl(x);
        if(ceil(c)!=floor(c))
        cout<<"NO\n";
        else if(l.find(c)!=l.end())
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }



    return 0;
}