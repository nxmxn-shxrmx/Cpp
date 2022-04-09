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

        ll a =0,b = 0;
        vector<ll>v1,v2;
        for(int i =0;i<n;++i)
        {
            ll f;cin>>f;
            if(i&1)
            {
            a  = __gcd(a,f);
            v1.push_back(f);
            }

            else
            {
            b = __gcd(b,f);
            v2.push_back(f);
            }
        }

        if(a==b)
        cout<<0<<"\n";

        else
        {
            bool k =0;
            for(int i =0;i<v1.size();++i)
            {
                if(v1[i]%b==0)
                {   k =1;
                    break;
                }
            }
            if(k==0)
            cout<<b<<"\n";

            else
            {
                for(int i = 0;i<v2.size();++i)
                {
                    if(v2[i]%a==0)
                    {
                        k =0;
                        break;
                    }
                }
                
                if(k==1)
                cout<<a<<"\n";
                else
                cout<<0<<"\n";
            }
        }
    }



    return 0;
}