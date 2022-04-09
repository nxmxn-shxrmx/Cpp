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

        int n;cin>>n;

        vector<int>v;

        for(int i =0;i<n;++i){

            int g;cin>>g;
            v.push_back(g);
        }
        int f=0;
        int d = -1;
        for(int i =n-1;i>0;--i){

            if(v[i]>d){
                d= v[i];
                f++;
            }
            else
            continue;

        }
        if(v[0]>=d)
        cout<<f<<"\n";

        else
        cout<<-1<<"\n";

    }
    return 0;
}