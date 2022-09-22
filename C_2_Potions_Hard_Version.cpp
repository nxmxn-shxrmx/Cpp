#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
        int n;cin>>n;
        int h = 0;

        ll k = 0;
        multiset<ll>s;
        for(int i = 0;i<n;++i)
        {
            ll f;cin>>f;
            if(k+f>=0)
            {
                k+=f;
                if(f<0)
                s.insert(f);
                h++;
                continue;
            }
            for(auto c:s)
            {
                if(c>f)
                break;

                if(c<f)
                {
                    k = k-c+f;
                    s.erase(s.find(c));
                    s.insert(f);
                    break;
                }
            }
        
        }
        cout<<h<<" ";


    return 0;
}