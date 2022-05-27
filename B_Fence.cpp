#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll s= 0;
    ll m =0;
    int n,k;cin>>n>>k;
    vector<int>v;
    for(int i = 0;i<k;++i)
    {
        int f;cin>>f;
        s+=f;
        v.push_back(f);
    }
    m = s;
    int j = 0;
    ll o =k;
    for(int i=k;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
    
        s-=v[j];
        s+=v[i];
        if(m>s)
        {
            m = s;
            o = i+1;
        }
        ++j;
    }
    cout<<o-k+1<<"\n";
    return 0;
}