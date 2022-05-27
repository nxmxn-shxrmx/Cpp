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
        int n;cin>>n;
        vector<ll>v;
        vector<ll>p(n);
        ll o = 0;
        for(int i = 0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
            o^=f;
            p[i]=o;

        }
        bool k = false;

    
            for(int i = 0;i<n-1;++i)
            {
                ll o = p[i];
                ll u = p[n-1]^o;
                if(o==u)
                {
                    k = true;
                    break;
                }
            }
        
        {

            for(int i = 0;i<n-2;++i)
            {
                ll u = p[i];
                for(int j = i+1;j<n-1;++j)
                {
                    ll mi = p[j]^u;
                    ll la = p[n-1]^p[j];
                    if(u==mi && la==mi)
                    {
                        k = true;
                        break;
                    }
                }
            }
            
        }
        if(k)
        cout<<"YES\n";

        else
        cout<<"NO\n";
        

    }

    return 0;
}