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

    bool b1=false,b2=false;
    if(a.size()==b.size()){

        for(int i=0;i<a.size();++i){

            if(a[i]=='1')
            b1=true;

            if(b[i]=='1')
            b2=true;
        }
        if(b1==b2)
        cout<<"YES\n";

        else{
            cout<<"NO\n";
        }
    }
    else
    cout<<"NO\n";
    

    return 0;
}