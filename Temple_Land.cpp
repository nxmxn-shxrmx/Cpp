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
        int s = 0;
        bool d = true;
        vector<int>v(n);
        for(int i = 0;i<n;++i){
            cin>>v[i];
        }
        if(n%2==0){
            cout<<"no\n";
        }
        else{

            for (int i = 0; i < n/2; i++)
            {   
                if(v[i]!=i+1 or v[n-i-1]!=i+1){
                    cout<<"no\n";
                    d = false;
                    break;
                }
            }

            if(d)
            {
                if(v[n/2]!=(n+1)/2)
                cout<<"no\n";

                else{
                    cout<<"yes\n";
                }
                
           }
            
        }
    }



    return 0;
}