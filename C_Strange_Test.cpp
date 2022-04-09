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
        ll a,b;
        cin>>a>>b;
        ll as = INT_MAX;
        for(int i = 0;i<=b;++i)
        {
            if(b==(b|i))
            as = min(as,abs(i-a)+(i!=b));
        }
        cout<<as<<"\n";
    }


    return 0;
}