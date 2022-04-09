#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x,y;
    for(int i = 0;i<5;i++){

        for(int j=0;j<5;++j){
            int c;cin>>c;
            if(c==1){
            y=j+1;
            x = i+1;
            }

        }
    }
    cout<<abs(3-x)+abs(3-y);

    return 0;
}