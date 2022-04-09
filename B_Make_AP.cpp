#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;

        if(2*b<=a+c)
        {
            if((a+c)%(2*b)==0)
            cout<<"YES\n";

            else 
            cout<<"NO\n";
        }
        else if(2*b>a+c)
        {
            int e = 2*b -a-c;
            if(e%a==0 || e%c==0)
            cout<<"YES\n";

            else
            cout<<"NO\n";
        }
        else
        cout<<"NOout\n";

    }

    return 0;
}