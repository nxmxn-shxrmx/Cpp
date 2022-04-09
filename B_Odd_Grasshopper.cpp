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

        ll n,x;
        cin>>n>>x;

        /*

        0 ->-1 = -1
        -1 ->+2 = 1
        1 ->+3 = 4
        4 ->-4  =0

        0 ->-5 = -5
        -5->+6 = 1 
        1->+7 = 8
        8->-8  =0


        */
       ll d = 0;

       if(x%4==1){
           d = -x;
       }
       else if(x%4==2)
       d = 1;

       else if(x%4==3)
       d = x+1;

       if(n&1)
       cout<<n-d<<"\n";

       else
       cout<<n+d<<"\n";
    }



    return 0;
}