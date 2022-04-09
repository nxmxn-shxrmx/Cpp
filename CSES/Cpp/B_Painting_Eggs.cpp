#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    ll so = 0;
    string s="";

    while (n--)
    {
        int a,g;
        cin>>a>>g;

        if(so+a<500){
            so+=a;
            cout<<"A";
        }
        else{
            so-=g;
            cout<<"G";
        }

    }



    return 0;
}