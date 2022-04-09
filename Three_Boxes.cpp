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
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a+b+c<=d)
        cout<<1<<"\n";

        else{
            if(a+b<=d)
            {
                cout<<2<<"\n";
            }
            else if(a+c<=d){

                cout<<2<<"\n";

            }
            else if(b+c<=d)
            cout<<2<<"\n";

            else
            cout<<3<<"\n";
        }

    }



    return 0;
}