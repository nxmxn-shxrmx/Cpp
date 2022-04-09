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

        if(a==0)
        cout<<"Liquid\n";

        else if(b ==0)
        cout<<"Solid\n";

        else
        cout<<"Solution\n";
    }



    return 0;
}