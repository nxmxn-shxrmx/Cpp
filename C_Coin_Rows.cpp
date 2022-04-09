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

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll s1 = 0;
        ll s2 = 0;
        vector<vector<ll>> v;
        for (int i = 0; i < 2; ++i)
        {
            ll s = 0;
            vector<ll> m;
            for (int j = 0; j < n; ++j)
            {
                ll f;
                cin >> f;
                s += f;
                m.push_back(f);
            }
            if (i == 0)
                s1 = s;
            else
                s2 = s;
            v.push_back(m);
        }
        ll k = 0;
        int i = 0;
        for (int j = 0; j < n; ++j)
        {
            if (i == 1)
            {
                s2 -= v[i][j];
                v[i][j] = 0;
            }
            else
            {
                s1 -= v[i][j];
                v[i][j] = 0;
                k += v[i + 1][j];
                if (s1 < k)
                {
                    i = 1;
                    s2 -= v[i][j];
                    v[i][j] = 0;
                }
            }
        }
        // for(auto c:v)
        // {
        //     for(auto x:c)
        //     cout<<x<<" ";
        //     cout<<"\n";
        // }
        // cout<<"\n";
        if (s1 == 0)
            cout << s2 << "\n";

        else if (s2 == 0)
            cout << s1 << "\n";

        else
        {
            ll u =0;
            k =0;
            i =0;
            for (int j = 0; j < n; ++j)
            {
                if (i == 1)
                {
                    u+=v[i][j];
                    s2 -= v[i][j];
                    v[i][j] = 0;
                }
                else
                {
                    if (s1 < s2)
                    {
                        i = 1;
                        u+=v[i][j];
                        v[i][j] = 0;
                        continue;
                    }
                    s1 -= v[i][j];
                    u+=v[i][j];
                    v[i][j] = 0;
                    s2 -= v[i + 1][j];
                }
            }
            cout<<u<<"\n";
        }
    }

    return 0;
}