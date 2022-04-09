#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,t;
    cin>>n>>t;

    vector<bool>v(n);
    while(t--){
        int f;cin>>f;
        int d =  0;
        int dd = INT_MIN;
        v[f-1]=true;
        for(int i =0;i<n;++i){

            d++;
            dd  = max(dd,d);
             if(v[i]){
            d =0;
            continue;
            
            }
        }
        cout<<dd<<" ";
        
    }
   


    return 0;
}