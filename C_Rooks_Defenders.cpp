// #include<bits/stdc++.h>

// using namespace std;

// #define ll long long
// #define mod (ll)(1e9 +7)

// const int N =1e5+10;

// int main(){

//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//         int n,q;cin>>n>>q;
//         vector<int>xa(n+1,0),ya(n+1,0);
//         set<int>xs,ys;
//         for(int i = 0;i<n;++i)
//         {
//             xs.insert(i+1);
//             ys.insert(i+1);
//         }
//         while(q--)
//         {
//             int t;cin>>t;
//             if(t==1)
//             {
//                 int x,y;cin>>x>>y;
//                 if(xa[x]==0)
//                 xs.erase(x);
//                 if(ya[y]==0)
//                 ys.erase(y);
//                 xa[x]++;
//                 ya[y]++;  
//             }
//             else if(t==2)
//             {
//                 int x,y;cin>>x>>y;
//                 xa[x]--;
//                 ya[y]--;
//                 if(xa[x]==0)xs.insert(x);
//                 if(ya[y]==0)ys.insert(y);

//             }
//             else
//             {
//                 int x1,y1;cin>>x1>>y1;
//                 int x2,y2;cin>>x2>>y2;
                
//                 auto a = xs.lower_bound(x1);
//                 auto b = ys.lower_bound(y1);

                
//             }
//         }


//     return 0;
// }



#include<stdlib.h>
#include<iostream>
#include<time.h>
#include<vector>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<unordered_set>
#include<cmath>
#include<numeric>
#include<iterator>
#include<set>
#include<unordered_map>
#include<map>
#include<queue>
#include<cstring>
#include<stdio.h>
#include<fstream>
#include<iomanip>
#include<functional>
#include<bitset>
#include<chrono>
#include<climits>
#include<assert.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
#define fastio()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
using namespace chrono;
typedef long long ll ;
typedef long double ld ;
 
const ll MAX=1e9;
const ll MIN=1e-9;

//pbds set
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set; 
//pbds multiset (mark the key for same value)
typedef tree<pair<int,int> , null_type, less<pair<int,int>> , rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
//pbds map
typedef tree<int, int, less<int> ,rb_tree_tag, tree_order_statistics_node_update> ordered_map;

 
 
 
 
 
//- chori ka mall 
//--------------------------------------- 
#define ll         long long
#define lld        long double
#define pb          push_back
#define pbb          push_back
#define pf          push_front
#define pff          push_front
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define vii         vector<pii>
#define vv          vector<vi>
#define all(a)      (a).begin(),(a).end()
#define rall(a)     (a).rbegin(),(a).rend()
#define ff          first
#define ss           second
#define nline        '\n'
#define sz(x)     (ll)(x).size()
#define ull       unsigned long long
//-------------------------------------------
 
//------------------------------------------------
#define fo(i,l,u)   for(i=l;i<u;i++)
#define rfo(i,l,u)  for(i=l;i>=u;i--)
#define allfo(s)    for(auto it=(s).begin();it!=(s).end();it++)
#define _init(b)     memset(b,-1,sizeof(b))
#define _init0(b)     memset(b,0,sizeof(b))
#define MOD         1000000007
#define hell        998244353
#define output(x) cout << (x ? "YES" : "NO")<<endl;
#define Output(x) cout << (x ? "Yes" : "No")<<endl;

//------------------------------------------------
 
 
 
//-----------------------------------------
#define MOD2 (998244353)
#define MOD3 (1000000009)
#define PI acos(-1)
#define eps (1e-8)
#define INF (1999999999999999999) 
#define INFU (18446744073709551615) 
 
 
template<class A,class B>ostream&operator<<(ostream&out,const pair<A,B>&a){return out<<"("<<a.first<<","<<a.second<<")";}
template<class A>ostream&operator<<(ostream&out,const vector<A>&a){for(const A &it:a)out<<it<<" ";return out;}
template<class A,class B>istream&operator>>(istream&in,pair<A,B>&a){return in>>a.first>>a.second;}
template<class A>istream&operator>>(istream&in,vector<A>&a){for(A &i:a)in>>i;return in;}
ifstream cinn("in.txt");ofstream coutt("out.txt");
ll poww(const ll &a,ll b,const ll &m=MOD){if(b==0)return 1;ll x=poww(a,b/2,m);x=x*x%m;if(b&1)x=x*a%m;return x;} 
 
//---------------------------------------------------------------------------------------
 
 
ll gcd(ll a, ll b) {if(a>b)swap(a,b) ;  if (a == 0)  return b; return gcd(b % a, a); }  
ll rll(ll  l , ll r){return rand()%(r-l+1) + l ;}
long long binpow(long long a, long long b) {long long res = 1; while (b > 0) { if (b & 1)res = res * a; a = a * a;b >>= 1; }return res;}
long long binpow(long long a, long long b, long long m) { a %= m;long long res = 1;while (b > 0) {if (b & 1)res = res * a % m; a = a * a % m;b >>= 1;} return res;}
//---------------------------end---------------------------------
 
 
 
 
 
 
 
 //-----------------------------------------------------------chori ka mall
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
 
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(multimap <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
  
//------------------------------------------------------------------------------------------------------------------------------------------
 
 
 
 struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
 
 ll mulm(ll a, ll b, ll mod){
  return (a*b)%mod;
}
 ll addm (ll a, ll b, ll mod){
  return (a+b)%mod;
 }
  ll subm(ll a, ll b, ll mod){
    return (a-b+mod)%mod;
 }
 
 
//  void heapPermutation(vector<int> &a, int size, int n)
// {
//     // if size becomes 1 then prints the obtained
//     // permutation
//     if (size == 1) {
//          // calling(a,n);
//       for(auto i:a)
//         cout<<i<<" ";cout<<endl;
//         return;
//     }
 
//     for (int i = 0; i < size; i++) {
//         heapPermutation(a, size - 1, n);
 
//         // if size is odd, swap 0th i.e (first) and
//         // (size-1)th i.e (last) element
//         if (size % 2 == 1)
//             swap(a[0], a[size - 1]);
 
//         // If size is even, swap ith and
//         // (size-1)th i.e (last) element
//         else
//             swap(a[i], a[size - 1]);
//     }
// }

 ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
} 

ll modInverse(ll b, ll m)
{
    ll x, y; // used in extended GCD algorithm
    ll g = gcdExtended(b, m, &x, &y);
 
    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;
 
    // m is added to handle negative x
    return (x%m + m) % m;
}




unsigned long long int solve()
{   

//gbdbp   <-------------------
 int size, q;
 cin>>size>>q;
 map<int,int> row ,col;
 set<int> rows, cols;
 for(int i = 0 ;i<size;i++){
    rows.insert(i);
    cols.insert(i);
 }

  while(q--){
    int k;
    cin>>k;
    if(k ==1 ){
        int r ,c; 
        cin>>r>>c;
        r--;
        c--;
        rows.erase(r);
        cols.erase(c);
        row[r]++;
        col[c]++;
    }
    else if(k == 2){
        int r ,c; 
        cin>>r>>c;
        r--;
        c--;
        row[r]--;
        col[c]--;
        if(row[r] == 0){
            rows.insert(r);
        }
        if(col[c] == 0)
            cols.insert(c);

    }
    else {
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        r1--;c1--;r2--;c2--;
        debug(rows)
        debug(cols)
        auto p = rows.lower_bound(r1);
        auto p2  = cols.lower_bound(c1);
        debug(*p)
        debug(*p2)
        if((  p == rows.end() || *p > r2) || (p2 == cols.end() || *p2 > c2 )){
            cout<<"YES";
        }
        else
            cout<<"NO";
        cout<<nline;

    }
  }
//bhai global variable
//bitwise has less presedence
// two value subtration when taken mod use subfrommod()
// trying changing the variable of binary search
   return 0;
}
 
 
signed main(){
  fastio();
      #ifndef ONLINE_JUDGE
      // freopen("input.txt", "r", stdin);
      // freopen("output.txt", "w", stdout);
      freopen("Error.txt", "w", stderr);
      #endif
 
 
  ll test=1;
  // cin>>test ;
  // ll i=1;
  auto start1 = high_resolution_clock::now();
 while(test--){
  // cout<<"Case #"<<i++<<": "<< solve()<<"\n";
  solve();
  cout<<"\n";
 
 }
       auto stop1 = high_resolution_clock::now();
 auto duration = duration_cast<microseconds>(stop1 - start1);
      #ifndef ONLINE_JUDGE
      cerr << "Time: " << duration.count() / 1000 << endl;
      #endif
 
 return 0;
}



 