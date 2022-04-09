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
        ll n,k;cin>>n>>k;
        if(n==4 && k ==3)
        {
            cout<<-1<<"\n";
            continue;
        }
        if(n==k+1)
        {
            cout<<n-1<<" "<<n-2<<"\n";
            cout<<n/2-1<<" "<<1<<"\n";
            for(int i = 2,j=n-3;i<n/2-1;++i,--j)
            cout<<j<<" "<<i<<"\n";
            cout<<n/2<<" "<<0<<"\n";
            continue;
        }
        cout<<n-1<<" "<<k<<"\n";
        for(int i = 1,j=n-2;i<n/2;++i,--j)
        {
            if(i==k)
            {
                cout<<j<<" "<<0<<"\n";
            }
            else if(j==k)
            {\
                cout<<0<<" "<<i<<"\n";
            }
            else
            cout<<j<<" "<<i<<"\n";
        }
    }


    return 0;
}