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
        ll n;cin>>n;
        ll s = 0;
        multiset<ll>m,k;
        for(int i = 0;i<n;++i)
        {
            ll f;cin>>f;
            m.insert(f);
            s+=f;
        }
        k.insert(s);
        if(n==1)
        cout<<"YES\n";

        else
        {
            bool o = true;
            while(m.size()!=0)
            {
                
                if(k.size()==0 || *k.begin()<*m.begin())
                {
                    o =false;
                    cout<<"NO\n";
    
                    break;
                }
                if(m.find(*k.begin())!=m.end())
                {
                    m.erase(m.find(*k.begin()));
                    k.erase(k.find(*k.begin()));
                }
                else
                {
                    ll l = *k.begin();
                    k.erase(k.find(*k.begin()));
                    if(l%2==0)
                    {
                        k.insert((l/2));
                        k.insert((l/2));
                    }
                    else
                    {
                        k.insert((l/2+1));
                        k.insert((l/2));
                    }
                }

            }
            if(o)
            cout<<"YES\n";
        }

    }



    return 0;
}