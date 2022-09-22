#include <bits/stdc++.h>

using namespace std;
#define ll long long

bool recurse(ll x, vector<ll> v, ll k)
{
    for (int i = 0; i < v.size();)
    {
        ll sum = 0;
        if (k == 0)
            return false;
        while (i < v.size() && sum + v[i] <= x)
        {
            sum += v[i];
            ++i;
        }
        k--;
    }

    return true;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n>> m;
        vector<ll> s;
        ll u = 0;
        ll p = 0;
        for (int i = 0; i < n; ++i)
        {
            ll f;
            cin >> f;
            s.push_back(f);
            u += f;
            p =max(p,f);
        }

        ll l = s[n - 1];
        ll r = u;
        if (m >= n)
        {
            cout << l << "\n";
            return 0;
        }
        ll ans = 0;

        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (recurse(mid, s, m))
                ans = mid, r = mid - 1;
            else
                l = mid + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}