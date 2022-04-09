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

        ll n;cin>>n;
        int j =0;
        string g = to_string(n);

        if(n%2==0)
        cout<<0<<"\n";

        else{

            if((g[0]-'0')%2==0)
            cout<<1<<"\n";

            else
            {

            for(int i =0;i<g.size();++i)
            {
                int f = g[i]-'0';
                if(f%2==0)
                j++;
            }
            if(j>0)
            cout<<2<<"\n";

            else
            cout<<-1<<"\n";

            }
        }

    }


    return 0;
}