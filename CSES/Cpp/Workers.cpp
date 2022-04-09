#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    vector<int>v;
    multiset<int>v1,v2,v3;

    for(int i=0;i<n;++i){
        int f;cin>>f;
        v.push_back(f);
    }
    for(int i=0;i<n;++i){
        int f;cin>>f;
        if(f==1)
        {
            v1.insert(v[i]);
        }
        if(f==2){
            v2.insert(v[i]);
        }
        if(f==3){
            v3.insert(v[i]);
        }
    }
    if(v1.size()>0 && v2.size()>0){

    int it = *v1.begin()+*v2.begin();

    if(v3.size()>0)
    cout<<min(it,*v3.begin());

    else
    cout<<it;

    }
    else
    cout<<*v3.begin();

    return 0;
}