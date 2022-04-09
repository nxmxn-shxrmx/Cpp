#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a,b;
    cin>>a>>b;

    for(int i=0;i<a.size();++i){
        if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0')){
            cout<<"1";
        }
        else
        cout<<"0";
    }


    return 0;
}