#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;cin>>n;
    ll c =0;
    while(n){
        if(n%2==0)
        c+=1;
        n /= 2;
    }
    cout<<pow(2,c);

    return 0;
}
/*


10 ^ 0 =
10+0= 10
1010 
0000
= 1010


*/