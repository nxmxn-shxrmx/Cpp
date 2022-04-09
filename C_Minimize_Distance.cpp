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
        ll o,k;cin>>o>>k;

        vector<ll>l,n;
        for(int i = 0;i<o;++i)
        {
            ll f;cin>>f;
            if(f>0)
            l.push_back(f);
            else
            n.push_back(-f);
        }
        sort(begin(l),end(l));
        sort(begin(n),end(n));
        ll ans = 0;
        for(int i = l.size()-1;i>=0;i-=k)
        {
            ans += 2*l[i];
        
        }
        for(int i= n.size()-1;i>=0;i-=k)
        {
            ans +=2*n[i];
            
        }
        ans -= max( (l.empty()?0:l.back()),(n.empty()?0:n.back()) );
        cout<<ans<<"\n";
    }



    return 0;
}