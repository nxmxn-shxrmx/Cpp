#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    int s1 =0,s2=0,s3=0;

    while(t--){

        int x,y,z;
        cin>>x>>y>>z;
        s1+=x;
        s2+=y;
        s3+=z;
    }
    if(s1==0 && s2==0 && s3==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }



    return 0;
}