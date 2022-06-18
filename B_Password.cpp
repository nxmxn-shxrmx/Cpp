#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 + 7)
const int N = 1e6 + 7;

ll le[N], re[N], po[N];

long long fact[N];
void initfact()
{
    fact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = (fact[i - 1] * i);
        fact[i] %= mod;
    }
}
ll bioexpo(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;

        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
bool check(ll l, string s)
{
    for (int i = l + 1; i < s.size(); ++i)
    {
        ll h = ((le[i] % mod - le[i - l] % mod) + mod) % mod;
        ll k = (le[l] * po[i - l + 1]) % mod;
      //  cout << h << " " << k << "\n";
        if (h == k)
            return 1;
    }
    return 0;
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    vector<int> ans;

    ll p = 1;
    po[1] = 1;
    po[0] = 1;

    for (int i = 1; i <= s.size(); ++i)
    {
        le[i] = (le[i - 1] % mod + (p * (s[i - 1] - 'a' + 1)) % mod) % mod;
        po[i] = p;
        p = (p * 31) % mod;
    }
    for (int i = s.size();i > 2; --i)
    {
        re[i] = (re[i + 1] % mod + (po[i] * (s[i - 1] - 'a' + 1)) % mod) % mod;
        ll k = (le[s.size() - i + 1] * po[i]) % mod;
        if (k == re[i])
            ans.push_back(s.size() - i + 1);    
    }
    int l = 0;
    string u = "Just a legend";
    int r = ans.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (check(ans[m], s))
        {
            l = m + 1;
            u = s.substr(0, ans[m]);
        }
        else
            r = m - 1;
    }
    cout << u << "\n";
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// #pragma GCC optimize ("-O3")
// #define watch(x) cout << (#x) << " = " << (x) << endl
// #define PI double(2 * acos(0.0))
// #define LL long long
// #define MOD 1000000007
// #define all(x) (x).begin(), (x).end()
// #define INF 1e15
// int n;
// string s;
// long long leftHash[1000005];
// long long rightHash[1000005];
// long long power26[1000005];
// vector<int> ans;
// int check(int len)	{
// 	len = ans[len];
// 	// cout << len << " ";
// 	for(int i = (len+1); i < n; i++)	{
// 		long long currHash = ((leftHash[i] - ((leftHash[i-len]*power26[len]) % MOD)) + MOD) % MOD;
// 		if(currHash == leftHash[len])	{
// 			return 1;
// 		}
// 	}
// 	return 0;
// }

// int main()  {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);cout.tie(0);
// 	cin >> s;
// 	n = s.length();
// 	power26[0] = 1;
// 	for(int i = 1; i <= n; i++)		{
// 		leftHash[i] = ((leftHash[i-1]*26) + (s[i-1]-'a')) % MOD;
// 		power26[i] = (power26[i-1]*26) % MOD;
// 	}
	
// 	for(int i = n; i >= 1; i--)	{
// 		rightHash[i] = (rightHash[i+1] + power26[n-i]*(s[i-1]-'a')) % MOD;
// 		if(rightHash[i] == leftHash[n-i+1])	{
// 			ans.push_back(n-i+1);
// 			// cout << n-i+1 << " ";
// 		}
// 	}
// 	// cout << "\n";
// 	string finalAns = "Just a legend";
// 	int l = 0; 
// 	int r = ans.size()-1;
// 	while(l <= r)	{
// 		int mid = (l+r)/2;
// 		if(check(mid))	{
// 			finalAns = s.substr(0, ans[mid]);
// 			l = mid+1;
// 		} else	{
// 			r = mid-1;
// 		}
// 	}
// 	cout << finalAns;
//     return 0;
// }

