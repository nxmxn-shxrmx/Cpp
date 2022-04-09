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

        if(n>=2000)
        cout<<1<<"\n";

        else if (n>=1600 && n<2000)
        {
            cout<<2<<"\n";
        }
        
        else
        cout<<3<<"\n";

    }


    return 0;
}