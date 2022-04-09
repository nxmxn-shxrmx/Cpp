#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    vector<ll>v;
    vector<ll>v1,v2;
    for(int i =0;i<m;++i)
    {
        ll f;cin>>f;
        v.push_back(f);
        v1.push_back(f);
        v2.push_back(f);
    }
    ll mi =0,ma=0;
    ll g = n;
    sort(begin(v1),end(v1));

    int i =0;
    while(g)
    {
        if(v1[i]==0)
        {
            i++;
        }
        mi+=v1[i];
        v1[i]-=1;
        g--;

    }
    sort(begin(v2),end(v2), greater<int>());
    while(g!=n)
    {
        ma+=v2[0];
        g++;
    
        v2[0]=v2[0]-1;
        sort(begin(v2),end(v2), greater<int>());
        
    }    
    cout<<ma<<" "<<mi;

    return 0;
}