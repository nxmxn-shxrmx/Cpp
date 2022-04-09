#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

void print(int r){

    if(r==1)
    cout<<1<<" ";

    else{
        print(r-1);
        cout<<r<<" ";
    }
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    print(n);


    return 0;
}