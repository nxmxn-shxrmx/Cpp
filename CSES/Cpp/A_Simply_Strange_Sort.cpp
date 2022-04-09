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

        for(int i=0;i<n;++i){
            int f;cin>>f;
            v.push_back(f);
        }
        int d=0;
        int g=0;
        for(int i=0;i<n;++i){
            int c = 0;
            for(int j=0;j<n-1;++j){

                if(v[j]>v[j+1]){
                    swap(v[j],v[j+1]);
                    c++;
                    g=1;
                }
            }
            
            if(g==0){
                cout<<0;
                break;
            }
            d++;
            if(c==0)
            break;
        }
        if(g==1){
        cout<<d;
        }
        cout<<"\n";
    }


    return 0;
}