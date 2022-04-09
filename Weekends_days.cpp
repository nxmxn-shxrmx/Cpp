#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    if((n%7)==0){
        cout<<(n/7)*2<<" "<<(n/7)*2;
    }
    else{
        int s = n%7;
        if(s<=2){
        cout<<(n/7)*2<<" "<<(n/7)*2+s;
        }
        else if(s<6){
            cout<<(n/7)*2<<" "<<(n/7)*2+2;
        }
        else{
            cout<<(n/7)*2+1<<" "<<(n/7)*2+2;
        }
    }


    return 0;
}