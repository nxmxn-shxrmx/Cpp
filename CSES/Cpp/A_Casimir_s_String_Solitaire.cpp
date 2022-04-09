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
        
        string s;cin>>s;

        int a = 0,b =0, c=0;
        for(char x:s){

            if(x=='A')
            {
                a++;
            }
            else if(x=='B')
            {
                b++;
            }
            else{
                c++;
            }

        }
        b -=a;

        if(b==c)
        cout<<"YES\n";

        else
        cout<<"NO\n";

    }



    return 0;
}