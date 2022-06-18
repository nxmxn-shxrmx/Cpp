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

    int n;
    cin >> n;
    vector<ll> v;
    vector<pair<ll, ll>> s;
    int a = 0;
    ll m = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        ll f;
        cin >> f;
        v.push_back(f);
        if (m >= f)
        {
            s.push_back({a, i - 1});
            a = i;
        }
        m = f;
    }
    s.push_back({a, n - 1});

    ll sum = s[0].second - s[0].first + 2;
    for (int i = 1; i < s.size(); ++i)
    {
        sum = max(s[i].second - s[i].first + 2, sum);
        if (s[i].first + 1 <= s[i].second && v[s[i - 1].second] + 1 < v[s[i].first + 1])
            sum = max(s[i].second - s[i - 1].first + 1, sum);

        if (s[i - 1].second - 1 >= s[i - 1].first && v[s[i].first] - 1 > v[s[i - 1].second - 1])
            sum = max(s[i].second - s[i - 1].first + 1, sum);
    }
    if(sum>n)
    sum--;

    cout << sum << "\n";

    return 0;
}