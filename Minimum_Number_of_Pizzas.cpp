#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;
      
            //4 2
            //4 2*2
            //12 8
            ///8 12

            int f =  (n*k)/(__gcd(n,k));
            cout<<f/k<<"\n";
        
    }

    return 0;
}