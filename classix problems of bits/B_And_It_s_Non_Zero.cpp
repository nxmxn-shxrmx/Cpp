#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

ll b[2*N][32];

void solve()
{
    b[0][0]=0;
    for(ll i = 1;i<=2*N;++i)
    {
        for(ll j = 0;j<32;++j)
        {
            if(i&(1<<j))
            b[i][j]=1;
            b[i][j] +=b[i-1][j];

        }

        
    }
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    solve();
    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        ll ans  = m - n +1;
        ll k = m-n+1;
        for(int i =0;i<32;++i)
        ans = min(ans, k- (b[m][i]-b[n-1][i]));
        cout<<ans<<"\n";

    }

    return 0;
}