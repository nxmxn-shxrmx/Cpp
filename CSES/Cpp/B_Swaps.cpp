#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//https://youtu.be/6xt4YAyzHSQ
    int t;cin>>t;

    while(t--){


        int n;cin>>n;
        vector<pair<int,int>>a(n),b(n);
        for(int i = 0;i<n;++i){
            cin>>a[i].first;
            a[i].second=i;
        }
        for(int i=0;i<n;++i){
            cin>>b[i].first;
            b[i].second=i;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        
        

        vector<int>v(n);
        v[n-1] = b[n-1].second;

        for(int i = n-2;i>-1;--i){
            v[i]= min(v[i+1],b[i].second);
        }
        int as = INT_MAX;
        for(int i=0;i<n;++i){
            as = min(as,a[i].second+v[i]);
        }
        cout<<as<<"\n";

    
    }



    return 0;
}