#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        ll n,r,b;cin>>n>>r>>b;
           int k=r/(b+1);
        int e=r%(b+1);
        while(r){
         int y=k+(e>0);
         e=max(0,e-1);
          r-=y;
        while(y--)
            cout<<"R";
           if(b>0){
            cout<<"B";
            --b;
        }  
        }
        cout<<"\n";
    }

    return 0;
}