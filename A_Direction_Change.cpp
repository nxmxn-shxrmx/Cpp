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
        int n,m;cin>>n>>m;
        if(n==1 && m==1)
        {
            cout<<0<<"\n";
            continue;
        }
        if((n==1 && m>2) || (m==1 && n>2))
        {
            cout<<-1<<"\n";
            continue;
        }
        
        ll s = 2*min(n-1,m-1);
        ll k = abs(n-m);
        if(k%2==0)
            cout<<s+2*k<<"\n";
        else
            cout<<s+2*k-1<<"\n";

    }

    return 0;
}