#include<bits/stdc++.h>
using namespace std;

#define ll long long

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define vt vector
#define pb push_back
#define ar array
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(x, a) for (auto& x: a)

template<class A> void read(vt<A>& v);
template<class A, size_t S> void read(ar<A, S>& a);
template<class T> void read(T& x) {
    cin >> x;
}
void read(double& d) {
    string t;
    read(t);
    d=stod(t);
}
void read(long double& d) {
    string t;
    read(t);
    d=stold(t);
}
template<class H, class... T> void read(H& h, T&... t) {
    read(h);
    read(t...);
}
template<class A> void read(vt<A>& x) {
    EACH(a, x)
        read(a);
}
template<class A, size_t S> void read(array<A, S>& x) {
    EACH(a, x)
    read(a);
}
string to_string(char c) {
    return string(1, c);
}
string to_string(bool b) {
    return b?"true":"false";
}
string to_string(const char* s) {
    return string(s);
}
string to_string(string s) {
    return s;
}
string to_string(vt<bool> v) {
    string res;
    FOR(sz(v))
        res+=char('0'+v[i]);
    return res;
}
template<size_t S> string to_string(bitset<S> b) {
    string res;
    FOR(S)
        res+=char('0'+b[i]);
    return res;
}
template<class T> string to_string(T v) {
    bool f=1;
    string res;
    EACH(x, v) {
        if(!f)
            res+=' ';
        f=0;
        res+=to_string(x);
    }
    return res;
}

template<class A> void write(A x) {
    cout << to_string(x);
}
template<class H, class... T> void write(const H& h, const T&... t) {
    write(h);
    write(t...);
}
void print() {
    write("\n");
}
template<class H, class... T> void print(const H& h, const T&... t) {
    write(h);
    if(sizeof...(t))
        write(' ');
    print(t...);
}


#ifdef _DEBUG
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif

template<class T> void offset(ll o, T& x) {
    x+=o;
}
template<class T> void offset(ll o, vt<T>& x) {
    EACH(a, x)
    offset(o, a);
}
template<class T, size_t S> void offset(ll o, ar<T, S>& x) {
    EACH(a, x)
        offset(o, a);
}

mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
ll randint(ll a, ll b) {
    return uniform_int_distribution<ll>(a, b)(mt_rng);
}
template<class T, class U> void vti(vt<T> &v, U x, size_t n) {
    v=vt<T>(n, x);
}
template<class T, class U> void vti(vt<T> &v, U x, size_t n, size_t m...) {
    v=vt<T>(n);
    EACH(a, v)
        vti(a, x, m);
}

#define mod (ll)(1e9 +7)
const int N = 1e6 + 100;

long long fact[N];
void initfact() {
    fact[0] = 1;
    for(int i = 1; i < N; i++) {
        fact[i] = (fact[i-1] * i);
        fact[i] %= mod;
    }
}
ll bioexpo(ll a,ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
            res = (res*a)%mod;

        a = (a*a)%mod;
            b>>=1;
    }
    return res;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;read(n,k);
    priority_queue<pair<int,int>>p;
    FOR(i,1,n+1)
    {
        int f;read(f);
        p.push({-f,i});
    }
    vector<pair<int,int>>v;
    if(p.top().first!=0)
    {
        print(-1);
        return 0;
    }
    queue<pair<int,int>>q;
    q.push({-p.top().first,p.top().second});
    p.pop();
    while (!q.empty() && !p.empty())
    {
        int s = q.size();
        while (s-- && !p.empty())
        {
            int x = q.front().first;
            int i = q.front().second;
            q.pop();
       //     print(x,i);

            int u = 1;
            if(x==0)
                u=0;
            bool g = 0;
            while (u<k && !p.empty())
            {
                if(x==-p.top().first)
                {
                    print(-1);
                    return 0;
                }
                if(x+1<(-p.top().first))
                {
                    g=1;
                    break;
                }
                q.push({-p.top().first,p.top().second});
                v.push_back({i,p.top().second});
                ++u;
                p.pop();
            }
            if(g)
            break;
            
        }
    
    }
    if(v.size()!=n-1)
 {
    print(-1);
    return 0;
}
    
    print(v.size());
    EACH(x,v)
    print(x.first,x.second);
    

    return 0;
}