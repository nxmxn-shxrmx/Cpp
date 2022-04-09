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
        set<ll>s;
        for(int i =0;i<n;++i)
        {
            ll f;cin>>f;
            s.insert(f);
            v.push_back(f);
        }
        if(s.size()==1)
        {
            cout<<0<<"\n";
            continue;
        }

        ll c= 0;
        int i = n-1;
        while(true)
        {
            while(i>=0 && v[n-1]==v[i])
            i--;
            if(i<0)
            break;

                c++;
                i-=n-i-1;
        
        }
        cout<<c<<"\n";
    }


    return 0;
}