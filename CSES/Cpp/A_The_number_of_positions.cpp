#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,a,b;

    cin>>n>>a>>b;

    int s = 0;
    for(int i =a+1;i<=n;++i){
        if((n-i)<=b){
        s++;
        }
    }
    cout<<s;



    return 0;
}