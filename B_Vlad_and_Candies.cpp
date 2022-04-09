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
        vector<ll>v;

        for(int i =0;i<n;++i)
        {
            ll f;cin>>f;
        
            v.push_back(f);
        }
        if(n==1)
        {
            if(v[0]<=1)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
        else
        {
            sort(v.begin(),v.end());
            bool k = false;
            for(int i = n-1;i>=1;--i)
            {
                if(v[i]-v[i-1]>1)
                {
                    k =true;
                    break;
                }
                v[i-1] = v[i]-v[i-1];
            }
            if(k)
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
    }

    return 0;
}