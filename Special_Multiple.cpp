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
        for(int i =1;;++i)
        {
            ll j = stoi(bitset<32>(i).to_string());
            if(9*(j)%n==0)
            {
                cout<<9*j<<"\n";
                break;

            }

        }

        
    }


    return 0;
}