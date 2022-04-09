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

        int n,x;
        cin>>n>>x;
        vector<int>v;
        for(int i=0;i<n;i++){
            int f;cin>>f;
            v.push_back(f);
        }
        sort(v.begin(),v.end());
        int s=0,c=0;
        for(int i=0;i<n;i++){
             s+=v[i];
            if(s<=x){
            c++;
            }
            else
            break;
            
        }

    cout<<c<<"\n";


    }

    return 0;
}