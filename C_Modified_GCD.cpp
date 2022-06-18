#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 + 7)

const int N = 1e5 + 10;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, m;
    cin >> n >> m;
    set<int> v;
    ll b = min(n, m);
    ll g = ceil(sqrt(b));
    for (int i = 1; i <=g; ++i)
    {   

        if(b%i==0)
        {
            if(n%i==0 && m%i==0)
            v.insert(-i);
            ll j = b/i;
            if(m%j==0 && n%j==0)
            v.insert(-j);
        }
        
    }
    // for(auto c:v)
    // cout<<c<<"\n";
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        auto it = v.lower_bound(-b);
        if (abs(*it) < a)
            cout << -1 << "\n";
        else
            cout << abs(*it) << "\n";
    }

    return 0;
}