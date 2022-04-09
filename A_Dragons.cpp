#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>v;

    while(n--){
        int x,y;
        cin>>x>>y;

        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    bool b = true;
    for(auto x:v){

        if(s<=x.first){
            cout<<"NO"<<"\n";
            b = false;
            break;
        }
        else
        s+=x.second;
    }
    if(b){
        cout<<"YES"<<"\n";
    }



    return 0;
}