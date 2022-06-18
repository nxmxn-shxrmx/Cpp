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
        ll n;cin>>n;
        if(n==1)
        cout<<3<<"\n";
       
        else if(n%2)
        cout<<1<<"\n";

        else if( ceil(log2(n)) == floor(log2(n)) ) 
            cout<<n+1<<"\n";
        
        else
        {
            ll k = 2;
            while((k&n)==0)
            k*=2;

            cout<<k<<"\n";
        }
    }

    return 0;
}