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
    stack<pair<ll,ll>>s;
    for(int i = 0;i<n;++i)
    {
        ll f;cin>>f;
        if(i==0)
        cout<<0<<" ";

        else
        {
            while (!s.empty())
            {
                ll k = s.top().first;
                ll j = s.top().second;
                if(f>k)
                {
                    cout<<j<<" ";
                    break;
                }
                s.pop();
            }
            if(s.empty())
            cout<<0<<" ";
           
        }
         s.push({f,i+1});
    }

    return 0;
}