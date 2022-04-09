#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

void fact(int n,int ans)
{
    if(n==1)
    cout<<ans;

    else{
        fact(n-1,ans*n);
    }
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    fact(n,1);

    return 0;
}