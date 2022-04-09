#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n>>m;

    vector<int>c;
    for(int i=0;i<n;i++){
        int f;cin>>f;
        c.push_back(f);
    }
    sort(c.begin(),c.end());
    ll g = 0;
    for(auto x:c){

        if(x<0)
        g+=x;
        m--;
        if(m==0 || x>0)
        break;
    }

    cout<<abs(g)<<"\n";


    return 0;
}