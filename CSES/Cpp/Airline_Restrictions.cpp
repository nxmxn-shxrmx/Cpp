#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while(t--){

        int a,b,c,d,e;

        cin>>a>>b>>c>>d>>e;
        vector<int>v{a,b,c};
        sort(v.begin(),v.end());

        if(v[0]+v[1]<=d && v[2]<=e)
        cout<<"YES"<<"\n";

        else if(v[1]+v[2]<=d && v[0]<=e)
        cout<<"YES"<<"\n";

        else if(v[2]+v[0]<=d && v[1]<=e)
        cout<<"YES"<<"\n";

        else
        cout<<"NO"<<"\n";


    }



    return 0;
}