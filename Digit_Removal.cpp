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

        ll n,d;
        cin>>n>>d;

        ll m = n;
        int r,c=0,co=0;
        while(n){
            r = n%10;
            n/=10;
            c++;
            if(r==d)
            {
                n = n*pow(10,c)+(r+1)*pow(10,c-1);
                co=n-m;
                c=0;
            }
          
        }
          cout<<co<<"\n";


        
    }



    return 0;
}