#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x;cin>>x;

    for (int k = 31; k >= 0; k--) {
    
    if (x&(1<<k)) cout << "1";
    
    else cout << "0";
}


    return 0;
}