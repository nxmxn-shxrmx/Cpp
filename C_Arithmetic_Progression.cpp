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

    ll n;read(n);
    set<int>s;
    vector<int>v;
    FOR(i,0,n)
    {
        ll f;read(f);
        v.push_back(f);
        s.insert(f);
    }
    sort(v.begin(),v.end());
    if(n==1)
    {
        print(-1);
    }
    else if(s.size()==1)
    {
        print(1);
        print(v[0]);
    }
    else if(n==2)
    {
        ll d = abs(v[0]-v[1]);
        if(d%2==0)
        {
            print(3);
            cout<<v[0]-d<<" "<<v[0]+d/2<<" "<<v[1]+d<<"\n";
        }
        else 
        {
            print(2);
             cout<<v[0]-d<<" "<<v[1]+d<<"\n";
        }
    }
    else 
    {
        bool g =0;
        ll d = v[1]-v[0];
        vector<ll>ans;
        ll h = v[1]+d;
        FOR(i,2,n)
        {
            if(v[i]-v[i-1]!=d)
            {
                if(v[i]-h!=d)
                {
                    g =1;
                    break;
                }
                else
                {
                    if(ans.size()==1)
                    {
                        g =1;
                        break;
                    }
                    else 
                    {
                        ans.push_back(h);
                    }
                }
            }
            h+=d;
        }
        if(g==0)
        {
            if(ans.size()==0)
            {
                print(2);
                cout<<v[0]-d<<" "<<v[n-1]+d<<"\n"; 
            }
            else 
            {
                print(1);
                cout<<ans[0];
            }
        }
        else 
        {
            reverse(v.rbegin(),v.rend());
            bool g =0;
            ll d = v[0]-v[1];
            vector<ll>ans;
            ll h = v[1]-d;
            FOR(i,2,n)
            {
                if(v[i-1]-v[i]!=d)
                {
                    if(h-v[i]!=d)
                    {
                        g =1;
                        break;
                    }
                    else
                    {
                        if(ans.size()==1)
                        {
                            g =1;
                            break;
                        }
                    else 
                    {
                        ans.push_back(h);
                    }
                }
            }
                h-=d;
            }
            if(g)
            {
                print(0);
            }
            else 
            {
                 print(1);
                cout<<ans[0];
            }

        }

    }

    

    return 0;
}