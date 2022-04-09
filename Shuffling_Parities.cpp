#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;

        int sum = 0;
        int de=0,do0=0;
        for(int i=0;i<n;++i){

            int f;cin>>f;
            if((f+i+1)%2){
                ++sum;
            }
            else{
                if(f%2==0){
                    de++;
                }
                else{
                    do0++;
                }
            }
        }
        if(de==do0)
        cout<<sum+2*de<<"\n";

        else if(de<do0)
        cout<<sum+2*de<<"\n";

        else
        cout<<sum+2*do0<<"\n";
    }
    return 0;

}
