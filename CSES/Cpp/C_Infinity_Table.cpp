#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--){

        int n;cin>>n;
        int s = sqrt(n);
        int a = s*s;

        if(a==n){
            cout<<s<<" "<<1<<"\n";
        }
        else{
            n-=a;
            if(n<=(s+1))cout<<n<<" "<<s+1<<"\n";

            else{
                n-=(s+1);
                cout<<s+1<<" "<<(s+1)-n<<"\n";
            }

        }
    }



    return 0;
}