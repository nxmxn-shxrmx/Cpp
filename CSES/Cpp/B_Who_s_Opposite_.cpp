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

        int a,b,c;
        cin>>a>>b>>c;
        int x = abs(a-b);
        int d =2*abs(a-b);

        if(a<=d && b<=d && c<=d){

            if(c>x){
                cout<<c-x<<"\n";
            }
            else{
                cout<<c+x<<"\n";
            }

        }
        else{
            cout<<-1<<"\n";
        }
    }


    return 0;
}