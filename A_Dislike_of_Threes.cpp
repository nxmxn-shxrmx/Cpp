#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
     vector<int>v;
        for(int i=1;i<=1666;i++){
            if(i%3!=0 && i%10!=3){

                v.push_back(i);
            }

        }


    while(t--){

        int k;cin>>k;
    
        cout<<v[k-1]<<"\n";


    }



    return 0;
}