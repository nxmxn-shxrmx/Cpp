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

        int a,b;

        cin>>a>>b;
        int f =0;
        for(int i=1;i<3;++i){
            int z,g;
            cin>>z>>g;
            if((a==z && b==g) ||(a==g && b==z)){
                f = i;
            }
        }
        cout<<f<<"\n";
    }



    return 0;
}