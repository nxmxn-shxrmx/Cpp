#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n>>k;

    multiset<int>v;
    for(int i=0;i<n;++i){
        int f;cin>>f;
        v.insert(f);
    }
    int c=0;


    for(auto i =v.begin();i!=v.end();++i){
        int f  = *i;
        if(5-f>=k)
        c++;
    }
    cout<<c/3;


    return 0;
}